import csv
data=[]

headers="#include <nautilus/naut_types.h> \n\
#include <nautilus/libccompat.h> \n\
#include <nautilus/math.h> \n\
#define lmathlib_c \n\
#define LUA_LIB \n\
#include \"lua/lua.h\" \n\
#include \"lua/lauxlib.h\" \n\
#include \"lua/lualib.h\" \n"

print(headers)
with open("data.txt") as tsv:
	tsv_data = tsv.readlines()[2:]
	for line in tsv_data:
		
		if "FUNC" in line:
			l = line.split()

			data.append((l[1],l[4],l[7]))

print(data[1])
with open("func_data.csv",'wb') as fcsv:
	csv.writer(fcsv, dialect='excel').writerows(data)
