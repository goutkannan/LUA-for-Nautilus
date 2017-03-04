/* Test for adding new subroutines for nautilus
 *
 *
*
 * */

/*#include <nautilus/naut_types.h>
#include <nautilus/libccompat.h>
#include <nautilus/math.h>

#define lmathlib_c
*/

#define LUA_LIB
#include "lua/lua.h"

#include "lua/lauxlib.h"
#include "lua/lualib.h"
#include "lua/luaconf.h"
extern void naut_wru();
extern int  nk_vc_print(char *);
extern void nemo_unregister_event_action(int); 

static int naut_nk_p(lua_State *L)
{

	char *s = luaL_checklstring(L,1,NULL);
	int ret = nk_vc_print(s);
	printk("\n>>%d",ret);
	lua_pushnumber(L,ret);

 
}


static const luaL_Reg nautlib[] = {
	{"wru",naut_wru},
	{"nk_p",naut_nk_p},
	{"nemo_args",nemo_unregister_event_action}
};

LUAMOD_API int luaopen_naut (lua_State *L) {
	  luaL_newlib(L, nautlib);

	  return 1;
}

