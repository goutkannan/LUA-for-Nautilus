
alllines=[]

with open("./src/lua_src/linit.c","r") as cfile:
	alllines=[]
	for line in cfile.readlines():
		
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

			line += "\n#define  LUA_NAUTLIBNAME  \"naut\"\n "+"LUAMOD_API int (luaopen_naut) (lua_State *L);\n"
			

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





	 




