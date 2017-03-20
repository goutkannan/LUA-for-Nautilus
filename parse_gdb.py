import re
import ast
from parse_gdb_functions import *


test_vals = { 'nk_vc_print': {'ret_type': '<0x3344>', 'param': [['s', '<0x3c01>']]}
#'nk_launch_shell' : {'ret_type': '<0x34179>', 'param': [['name', '<0x34173>'], ['cpu', '<0x338cc>']]},
#'apic_get_maxlvt' : {'ret_type': '<0x3b496>', 'param': [['apic', '<0x3bdb7>']]}
}
logError= []



data_type={'0':["",None],'1':["void","0"]} 

def get_tags(full_line,dtype="base"):
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

        
    if("*" in string[0] ):
        string.pop(0)
        string.append("*") 

    return " ".join(string)


def load_data_from_log(filename="full_log.txt"):
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

lua_mapping = {"int":"checkint", \
               "long":"checklong",\
               "double":"checknumber",\
               "float":"checknumebr",\
              "char *":"checkstring", \
              "unsigned int":"checkunsigned",\
              "struct ": "checkunsigned",\
              "void *":"checkunsigned" ,\
              "int *":"checkunsigned"} 

def function_body(func_name,ret_type="void",params="void"):
    idx=1
    code="\n"
    pass_variable=[]
    for param_type in params:
        #print(param_type)
        lua_resolved =[lua_check for ds,lua_check in lua_mapping.items() if ds in param_type[1]]
        print(">>",lua_resolved)
        pass_variable.append(param_type[0])
        print("> ",param_type)
        if lua_resolved is not []:
            code+="\t"+ param_type[1]+" "+param_type[0]+" = luaL_"+  lua_resolved[0] +"(L,"+str(idx)+");\n"
        
        idx+=1

    if ret_type is not "void":
        code+=  "\t"+ret_type + " temp_return =" + func_name + "(" + " ,".join(pass_variable) +");"

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
            ret_type = resolve(value['ret_type'].replace("<0x","").replace(">",""))
            if ret_type is "Error":
                logError.append(value['name']+'....'+value['ret_type'])
                continue
            else:
                for f in ffilter:
                    if f in ret_type:
                        retFlag+=1


        else:
            pass
           # print("fixed return..",value)
        pFlag=-1
        plist=[] 

        for parameters in value['param']:
            
            
            if retFlag != -1:
                tempvar = resolve(parameters[1].replace("<0x","").replace(">","") )
                plist.append([parameters[0],tempvar])
                if plist[-1] is "Error":
                    logError.append("For Param : "+parameters[1]+"in "+value['name'])
                    continue
                else:
                    for f in ffilter:
                        if f in tempvar:
                            pFlag=0
                    if pFlag !=0:
                        break

        if pFlag==0 and retFlag!=-1:
            function_dataDict[value['name']] = {'ret_type':ret_type,'param':plist}

#print(function_dataDict)








"""print("....................")
print(logError)
"""

"""
#load_data_from_log()

with open("func_data.txt") as func_fp:
    line = func_fp.readline()
    data_dict={}
    while line!='':
        key = re.split("(\w+\s+):?",line)[1:]
        print(key[0])
        temp_line = ast.literal_eval(key[1].strip())
        print(temp_line)
        
        line = func_fp.readline() """


    
 




#print(resolve("d0e4"))


#print(resolve("267a9"))





type_addr_list=[]
new_dict = function_dataDict
"""
for k,v in test_vals.items():

    ret = resolve(v["ret_type"].replace("<0x","").replace(">","")) 
    
    new_dict[k]["ret_t:qype"] = ret 

    param = v["param"]
    
    for i in range(len(param)):
        
        new_dict[k]["param"][i][1] = resolve(param[i][1].replace("<0x","").replace(">","") )

"""

    #resolve("f5")
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


line=[]
for funation_name,parameters in new_dict.items():
    line.append("static int naut_"+ funation_name+"(lua_State *L){"+ function_body(funation_name,parameters['ret_type'],parameters['param'])  +"\n\treturn 1; \n}")

wrapper_funcs = "\n".join(line) 
wrapper_funcs += "\n\n"



with open("src/lua_src/lnautlib.c","w") as fp:
    fp.write(head)
    fp.write("\n")
    
    for k,v in new_dict.items():
        ptype = [y for x,y in v['param']]  
        line = "extern" + " " + v['ret_type'] + " "+ k + '('+ ", ".join(ptype)   +');\n' 
        fp.write(line)

    fp.write("\n") 
    fp.write(wrapper_funcs)
    fp.write(array_init)
    fp.write("\n")
    fp.write(footer)



