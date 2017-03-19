#define LUA_LIB 
#include "lua/lua.h" 
#include "lua/lauxlib.h" 
#include "lua/lualib.h" 
#include "lua/luaconf.h" 

/*extern void * nk_launch_shell(char *, int);
extern int apic_get_maxlvt(struct apic_dev *);
extern int nk_vc_print(char *);

static int naut_nk_launch_shell(lua_State *L){
	char * name = luaL_checkstring(L,1);
	int cpu = luaL_checkint(L,2);
	void * temp_return =nk_launch_shell(name ,cpu);
	return 1; 
}
static int naut_apic_get_maxlvt(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	int temp_return =apic_get_maxlvt(apic);
	return 1; 
}
static int naut_nk_vc_print(lua_State *L){
	char * s = luaL_checkstring(L,1);
	int temp_return =nk_vc_print(s);
	return 1; 
}*/

/*static const luaL_Reg n:w
 *autlib[] = { 
{"nk_launch_shell", naut_nk_launch_shell} ,
{"apic_get_maxlvt", naut_apic_get_maxlvt} ,
{"nk_vc_print", naut_nk_vc_print}
};*/

typedef struct test{
	int a;
}obj;

static int struct_push(lua_State *L)
{
  obj *v = (obj *)lua_touserdata(L,1);
  printk("v ..: %d", v->a);
  int temp = luaL_checkint(L,2);
  printk("other..:%d",temp);
  return 1;
}

static const luaL_Reg nautlib[] = {
	{"stest",struct_push}
	}

LUAMOD_API int luaopen_naut (lua_State *L) {
          luaL_newlib(L, nautlib);
          return 1;
}

