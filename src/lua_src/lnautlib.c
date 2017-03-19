/*
** $Id: lmathlib.c,v 1.83.1.1 2013/04/12 18:48:47 roberto Exp $
** Standard mathematical library
** See Copyright Notice in lua.h
*/

//# define HUGE_VAL (__builtin_huge_val())
//#define HUGE_VAL (123456)

//#include <stdlib.h>
//#include <math.h>

#include <nautilus/naut_types.h>
#include <nautilus/libccompat.h>
#include <nautilus/math.h>

#define lmathlib_c
#define LUA_LIB
#include "lua/lua.h"

#include "lua/lauxlib.h"
#include "lua/lualib.h"
#include "lua/luaconf.h"

extern int  nk_vc_print(char *);

static int math_randomseed (lua_State *L) {
  srand(luaL_checkunsigned(L, 1));
  (void)rand(); /* discard first value to avoid undesirable correlations */
  return 0;
}

static int naut_nk_p(lua_State *L)
{

		char *s = luaL_checklstring(L,1,NULL);
			int ret = nk_vc_print(s);
				printk("\n>>%d",ret);
					lua_pushnumber(L,ret);
						return 1;
						 
}

static const luaL_Reg mathlib[] = {
  {"randomseed", math_randomseed},
  {"nkp",naut_nk_p},
  {NULL, NULL}
};


/*
** Open math library
*/
LUAMOD_API int luaopen_naut (lua_State *L) {
  luaL_newlib(L, mathlib);
  
  /*lua_pushnumber(L, PI);
  lua_setfield(L, -2, "pi");
  lua_pushnumber(L, HUGE_VAL);
  lua_setfield(L, -2, "huge");
  */
  return 1;
}

