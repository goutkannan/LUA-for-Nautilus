#define LUA_LIB 
#include "lua/lua.h" 
#include "lua/lauxlib.h" 
#include "lua/lualib.h" 
#include "lua/luaconf.h" 

//extern int nk_vc_print(char *);
static int naut_nk_vc_print(lua_State *L) {
/*	char* s = luaL_checklstring(L,1, NULL);
	int ret = nk_vc_print(s);
	printk("\n>> %d",ret);
	lua_pushnumber(L,ret); */
//	printk(">>:");
}

static const luaL_Reg nautlib[] = { 
 {"nk_vc_print",naut_nk_vc_print}
};


LUAMOD_API int luaopen_naut (lua_State *L) {
          luaL_newlib(L, nautlib);
          return 1;
}
