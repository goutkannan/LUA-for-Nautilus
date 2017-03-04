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
extern void nemo_init (void);
extern void nemo_unregister_event_action(int); 

/*static void naut_wru(lua_State *L)
{

	        printk("New naut function");
}*/


static const luaL_Reg nautlib[] = {
	{"wru",naut_wru},
	{"nemo_init",nemo_init},
	{"nemo_args",nemo_unregister_event_action}
};

LUAMOD_API int luaopen_naut (lua_State *L) {
	  luaL_newlib(L, nautlib);
	  nemo_init();
	  return 1;
}

