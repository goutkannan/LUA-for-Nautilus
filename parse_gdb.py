
import re
count = 0

test_vals = { 'nk_vc_print': {'ret_type': '<0x3344>', 'param': [['s', '<0x3c01>']]}}

data_type={'0':["",None]} 

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




with open("full_log.txt") as elflog:
	for line in elflog: 

		m = re.findall("\s+[<\w+>]*<(.+)>:*\s+([\w\s]*:)(.*)",line)
		if m:
			title = m[0][2]
			count+=1 #just for debugging 
		

			if "DW_TAG_base_type" in title :
				next_line=""
				flag=0
				while 1: 

					next_line = elflog.next()
					if "DW_AT_name" in next_line:
						break
					if "Abbrev Number" in next_line:
						flag=1
						break

				if flag==0:
					tagname = get_tags(next_line,dtype="base")
					set_tags(m[0][0],tagname)
				else:
					continue

			if "DW_TAG_structure_type" in title :
				next_line=""
				flag=0
				while 1: 

					next_line = elflog.next()
					if "DW_AT_name" in next_line:
						break
					if "Abbrev Number" in next_line:
						flag=1
						break

				if flag==0:
					structure_name = get_tags(next_line,dtype="base")
					set_tags(m[0][0],structure_name)
				else:
					continue

			if "DW_TAG_typedef" in title:
				next_line=""
				flag=0
				while 1: 
					next_line = elflog.next()
					if "DW_AT_type" in next_line:
						break
					if "Abbrev Number" in next_line:
						flag=1

						break

				if flag==0:
					typedef_address = get_tags(next_line,dtype="derived")
					set_tags(m[0][0],"",typedef_address)			
				else:
					continue	

			if "DW_TAG_pointer_type" in title:
				next_line=""
				flag = 0 
				while 1: 

					next_line = elflog.next()
					if "DW_AT_type" in next_line:  						
						break
					if "Abbrev Number" in next_line:
						flag=1

						break


				if(flag==0):
					tagname = get_tags(next_line,dtype="derived")	
					set_tags(m[0][0],"*",tagname)
				else:
					continue

			if "DW_TAG_const_type" in title:
				next_line=""
				flag=0
				while 1: 
					next_line = elflog.next()
					if "DW_AT_type" in next_line:
						break
					if "Abbrev Number" in next_line:
						flag=1
						break
				if flag ==0:
					tagname = get_tags(next_line,dtype="derived")	
					set_tags(m[0][0],"const",tagname)
				else:
					continue



def resolve(label_address):
	key= label_address
	string = []
	while data_type[str(key)][1] is not None:
		if data_type[key][0].strip() is not "":
			string.append(data_type[key][0])
		key = data_type[key][1]

	if("*" in string[0] ):
		string.pop(0)
		string.append("*") 

	return " ".join(string)


type_addr_list=[]
new_dict = test_vals

for k,v in test_vals.items():

	ret = resolve(v["ret_type"].replace("<0x","").replace(">","")) 
	
	new_dict[k]["ret_type"] = ret 

	param = v["param"]
	
	for i in range(len(param)):
		print(">>",new_dict[k]["param"])
		new_dict[k]["param"][i][1] = resolve(param[i][1].replace("<0x","").replace(">","") )


print(new_dict) 
	#resolve("f5")
head = '#define LUA_LIB \n\
#include "lua/lua.h" \n\
#include "lua/lauxlib.h" \n\
#include "lua/lualib.h" \n\
#include "lua/luaconf.h" \n\
'


footer = 'LUAMOD_API int luaopen_naut (lua_State *L) {\n\
          luaL_newlib(L, nautlib);\n\
          return 1;\n\
}'

array_init ="static const luaL_Reg nautlib[] = { \n"
line=[]
for k in new_dict.keys():
	line.append("{\""+k+"\","+" "+k+"}")
	
array_init += " ,\n".join(line) 
array_init += "\n};"


print(array_init)

with open("src/lua_src/lnautlib.c","w") as fp:
	fp.write(head)
	fp.write("\n")
	
	for k,v in new_dict.items():
		ptype = [y for x,y in v['param']]  
		line = "extern" + " " + v['ret_type'] + " "+ k + '('+ ", ".join(ptype)   +');\n' 
		fp.write(line)

	fp.write("\n") 
	fp.write(array_init)
	fp.write("\n")
	fp.write(footer)

