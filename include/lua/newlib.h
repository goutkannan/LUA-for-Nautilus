int luaopen_nautlib2(lua_State *L);
#define LUA_EXTRALIBS { "mylib", luaopen_nautlib2 },
