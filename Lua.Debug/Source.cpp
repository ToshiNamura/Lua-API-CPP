#include <iostream>
#include <lua_inc.h>

int main()
{
	lua_State* L = luaL_newstate();

	lua_close(L);

	return 0;
}