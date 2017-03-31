import re
import ast
import os
from parse_gdb_functions import *



logError= []
typedef_names={}
data_type={'0':["",None],'1':["void","0"]} 

""" Executing the readelf command and storing the details in a file """
fileName ="full_log.txt"
os.system("readelf -wi nautilus.bin > "+fileName)




LUA_SRC_PATH ="src/lua_src/"
LIBNAME="lnautlib.c"

with open("./src/lua_src/linit.c","r") as cfile:
    alllines=[]
    for line in cfile.readlines():
        print(">",line)
        if "{LUA_NAUTLIBNAME, luaopen_naut}" in line:
            line=""

        if "{LUA_MATHLIBNAME, luaopen_math}" in line:

            line += '  '+"{LUA_NAUTLIBNAME, luaopen_naut},\n"
         

        alllines.append(line)

with open("./src/lua_src/linit.c","w") as cwf:
    cwf.writelines(alllines)


with open("./include/lua/lualib.h","r") as cfile:
    alllines=[]
    for line in cfile.readlines():
        print(">",line)
        if "#define  LUA_NAUTLIBNAME  \"naut\"" in line:
            line=""
        if "LUAMOD_API int (luaopen_naut) (lua_State *L);" in line:
            line=""

        if "LUAMOD_API int (luaopen_package) (lua_State *L)" in line:

            line += "\n#define  LUA_NAUTLIBNAME  \"naut\"\n"+"LUAMOD_API int (luaopen_naut) (lua_State *L);\n"
            

        alllines.append(line)

with open("./include/lua/lualib.h","w") as cwf:
    cwf.writelines(alllines)

flag=0
make_all_lines=[]
with open("./src/lua_src/Makefile","r") as makefile:
    make_all_lines=[line for line in makefile.readlines() if line.strip()] 
    last_line = make_all_lines[-1]

    if "lnautlib.o" not in last_line:
        make_all_lines[-1] = make_all_lines[-1].replace("\n","\\\n")

        make_all_lines.append("\t lnautlib.o")
        flag=1

if flag==1:
    with open("./src/lua_src/Makefile","w") as write_makefile:
        write_makefile.writelines(make_all_lines)



def get_tags(full_line,dtype="base"):
    """
    Args: text line containing the resolved tags/address 
    Return: Match tag is success else None

     """
    if dtype is "base":
        m = re.search(".*\)*:(.*)",full_line)
    elif dtype is "derived":
        
        m = re.search(".*:\s*<0x(.*)>",full_line)
    else:
        return None

    if m:
        return m.group(1).strip()
    else:
        return None


def set_tags(key,tag,tag_type=0):
        #print(m.group(1))
        
        data_type[str(key)] = [str(tag),tag_type]


def resolve(label_address):
    #print("in resolve")
    key= label_address
    string = []
    try:
        while data_type[str(key)][1] is not None:
            #print(key)
        
            if data_type[key][0].strip() is not "":
            
                string.append(data_type[key][0])
            key = data_type[key][1]
    except KeyError:
        logError.append(["In "+str(key)+" \t- (KeyError) Key not found"+" ,".join(string)])
        return "Error"

    for i in range(len(string)):
        if "*" in string[0]:
            string.pop(0)
            string.append('*')
        else:
            break

  

    return " ".join(string)


def load_data_from_log(filename=fileName):
    count =0
    lookBack = 0
    pattern_DW_line ="\s+<\w+><(.+)>:*\s+([\w\s]*:)(.*)"
    with open("full_log.txt") as elflog:
        
        line = elflog.readline() 


        while line!="":
        

            m = re.findall(pattern_DW_line,line)
            if m:
                title = m[0][2]
                
                count+=1 #just zfor debugging 
                

                if "DW_TAG_pointer_type" in title:
                    next_line=""
                    flag = 0 
                    while 1: 

                        next_line = elflog.readline()
                        if "DW_AT_type" in next_line:  						
                            break
                        if "Abbrev Number" in next_line:
                            flag=1
                            set_tags(m[0][0],"*",'1')
                            break
                            


                    if(flag==0):
                        tagname = get_tags(next_line,dtype="derived")	
                       # print(tagname)
                        set_tags(m[0][0],"*",tagname)
                        
                    else:
                        line = next_line
                        continue


                if "DW_TAG_base_type" in title :
                    next_line=""
                    flag=0
                    while 1: 

                        next_line = elflog.readline()
                        if "DW_AT_name" in next_line:
                            break
                        if "Abbrev Number" in next_line:
                            flag=1
                            
                            set_tags(m[0][0],"void")	
                            break

                    if flag==0:
                        tagname = get_tags(next_line,dtype="base")
                        set_tags(m[0][0],tagname)						
                    else:
                        line = next_line
                        continue

                if "DW_TAG_structure_type" in title :
                    next_line=""
                    flag=0
                    while 1: 

                        next_line = elflog.readline()
                        if "DW_AT_name" in next_line:
                            break
                        if "Abbrev Number" in next_line:
                            flag=1
                            
                            break

                    if flag==0:
                        structure_name = get_tags(next_line,dtype="base")
                        set_tags(m[0][0],"struct "+structure_name)
                        
                    else:
                        line = next_line
                        continue

                if "DW_TAG_typedef" in title:
                    next_line=""
                    
                    flag=0
                    while 1: 
                        next_line = elflog.readline()
                        if "DW_AT_type" in next_line:
                            break
                        if "DW_AT_name" in next_line:
                            typename = next_line.split(":")[-1].strip()
                            
                            typedef_names[m[0][0]] = [typename]

                        if "Abbrev Number" in next_line:
                            flag=1
                            
                            set_tags(m[0][0],"void")
                            break

                    if flag==0:

                        typedef_address = get_tags(next_line,dtype="derived")
                        set_tags(m[0][0],"",typedef_address)	
                            
                    else:
                        line = next_line
                        continue	
                    

                if "DW_TAG_const_type" in title:
                    next_line=""
                    flag=0
                    while 1: 
                        next_line = elflog.readline()
                        if "DW_AT_type" in next_line:
                            break
                        if "Abbrev Number" in next_line:
                            flag=1
                            
                            break
                    if flag ==0:
                        tagname = get_tags(next_line,dtype="derived")	
                        set_tags(m[0][0],"const",tagname)
                        
                    else:
                        line = next_line
                        continue
            line = elflog.readline() 

def resolve_lua_type(data_type):
    #print("in as",data_type)

    if "struct" not in data_type:
        if "*" in data_type and "char" not in data_type:
            return "checkunsigned"


        if re.match(".*double",data_type):
            return "checknumber"
        elif re.match(".*float",data_type):
            return "checknumber"
        elif re.match(".*char\s*\*",data_type):
            return "checkstring"
        elif re.match("signed\s*char",data_type):
            return "checkint"
        elif re.match(".*(long\s+)+int",data_type):
            return "checkint"
        elif re.match("int",data_type.strip()):
            return "checkint"
        elif re.match(".*unsigned.*|char",data_type):
            return "checkunsigned"
        elif re.match(".*void\s+\*",data_type):
            return "checkunsigned"

    elif re.match(".*struct.*\*",data_type): 
        return "checkunsigned"

def resolve_lua_ret_type(data_type):
    if re.match(".*char\s*\*",data_type):
        return "lua_pushstring"
    elif re.match("void",data_type):
        return None
    else:
        return "lua_pushnumber"


def function_body(func_name,ret_type="void",params="void"):
    idx=1
    code="\n"
    pass_variable=[]
    for param_type in params:
        
        if param_type[0]=="...":
            lua_resolved = None
        else:
            lua_resolved = resolve_lua_type(param_type[1])
            #print(">>",lua_resolved)
            pass_variable.append(param_type[0])
        
        if lua_resolved is not None:
            code+="\t"+ param_type[1]+" "+param_type[0]+" = luaL_"+  lua_resolved +"(L,"+str(idx)+");\n"
        
        idx+=1

    if ret_type is not "void":
        
        fn_ret_type = resolve_lua_ret_type(ret_type)
        if fn_ret_type=="lua_pushstring":
            code+=  "\t"+ret_type + " temp_return =" + func_name + "(" + " ,".join(pass_variable) +");"
            code+= "\n\t"+ fn_ret_type +"(L, temp_return);"
        elif fn_ret_type=="lua_pushnumber":
            if "*" in ret_type:
                code+=  "\tlua_Number temp_return =*(lua_Number *)" + func_name + "(" + " ,".join(pass_variable) +");"
            else:
                
                code+=  "\tlua_Number temp_return =" + func_name + "(" + " ,".join(pass_variable) +");"
            code+= "\n\t"+ fn_ret_type +"(L, temp_return);"

    else:
        code+=  "\t" + func_name + "(" + " ,".join(pass_variable) +");"
        



    """print(".....")		  
    print(code)
    print(".....")		  """

    return code

"""
Driver code to load the dictionary and generate the code .c

"""

load_data_from_log()

 
tmpfunction_dataDict = get_function_sign()
function_dataDict = defaultdict(lambda: {})


#print(type(function_dataDict))

ffilter = ['int','double','float','*','void','char *']
for key,value in tmpfunction_dataDict.items():
    #print(value)
    retFlag=-1

    if "static" not in value.keys() :
        if(value['ret_type'] != "void"):
            ret_type = resolve(value['ret_type'].replace("<0x","").replace(">","")) # resolving the return types 
            if ret_type is "Error":
                logError.append(value['name']+'....'+value['ret_type'])
                continue
            else:
                for f in ffilter:      #custom filter to let only
                    if f in ret_type:
                        retFlag+=1


        else:
            ret_type="void"
            retFlag=1
           # print("fixed return..",value)
        pFlag=0
        plist=[] 
        typelist={}
        for parameters in value['param']:
            
            pFlag=-1
            if retFlag != -1:
                if parameters[1]=="...":
		          plist.append(parameters)
		          pFlag=0
                else:
                    addr = parameters[1].replace("<0x","").replace(">","")
                    
                    if addr in typedef_names.keys():
                        
                        typelist[parameters[0]]=typedef_names[str(addr)]

                    tempvar = resolve(addr)

                    if tempvar is "Error":
                        logError.append("For Param : "+parameters[1]+"in "+value['name'])
                        break
                    else:
                        if parameters[0] in typelist.keys():
                            typelist[parameters[0]].append(tempvar)
                    
                        plist.append([parameters[0],tempvar])
                        for f in ffilter:
                            if f in tempvar:
                                pFlag=0
                if pFlag !=0:
                    break

        if pFlag==0 and retFlag!=-1:
            function_dataDict[value['name']] = {'ret_type':ret_type,'param':plist,'typedef':typelist} ## add the typedefs here

for k, v in function_dataDict.items():
    print k + ": " + str(v)


type_addr_list=[]
new_dict = function_dataDict


head = '#include <nautilus/naut_types.h> \n\
#include <nautilus/libccompat.h>\n\
#include <nautilus/math.h>\n\
#define lmathlib_c\n\
#define LUA_LIB\n\
#include "lua/lua.h"\n\
#include "lua/lauxlib.h"\n\
#include "lua/lualib.h"\n\
#include "lua/luaconf.h"\n\
'


footer = 'LUAMOD_API int luaopen_naut (lua_State *L) {\n\
          luaL_newlib(L, nautlib);\n\
          return 1;\n\
}'

array_init ="static const luaL_Reg nautlib[] = { \n"
line=[]
for k in new_dict.keys():
    line.append("{\""+k+"\","+" naut_"+k+"}")
    
array_init += " ,\n".join(line) 
array_init += ",\n{NULL, NULL}\n};"

"""
Code for popluating the static functions with the wrapper for LUA
Decorate the wrapper as static function which returns an int 
"""

struct_declare=[]
line=[]
for funation_name,parameters in new_dict.items():
    for param in parameters['param']:
        if "struct" in param[1] or "union" in param[1]:
            struct_declare.append(param[1].replace("*","")+";")


    line.append("static int naut_"+ funation_name+"(lua_State *L){"+\
        function_body(funation_name,parameters['ret_type'],parameters['param'])  +\
        "\n\treturn 1; \n}")

struct_dec = "\n".join(struct_declare)
struct_dec += "\n\n"
wrapper_funcs = "\n".join(line) 
wrapper_funcs += "\n\n"



with open("src/lua_src/lnautlib.c","w") as fp:
    fp.write(head)
    fp.write("\n")
    fp.write(struct_dec)

    for k,v in new_dict.items():
        ptype_list=[]
        typedefdeclare =[]
        for name,ptype in v['param']:
            #print(type(v['typedef']))
            if name not in v['typedef'].keys():
                ptype_list.append(ptype)
            else:
                for n,t in v['typedef'].items():
                    print(t)
                    if n==name:
                        ptype_list.append(t[0])
                        typedefdeclare.append("typedef "+t[1]+" "+t[0]+";\n")

        line = "extern" + " " + v['ret_type'] + " "+ k + '('+ ", ".join(ptype_list)   +');\n' 
        declareline = "".join(typedefdeclare)

        fp.write(declareline)
        fp.write(line)

    fp.write("\n") 
    fp.write(wrapper_funcs)
    fp.write(array_init)
    fp.write("\n")
    fp.write(footer)



#print(logError)
