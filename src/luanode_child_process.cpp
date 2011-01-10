#include "stdafx.h"
#include "LuaNode.h"
#include "luanode_child_process.h"
#include "blogger.h"

using namespace LuaNode;

const char* ChildProcess::className = "ChildProcess";
const ChildProcess::RegType ChildProcess::methods[] = {
	{"spawn", &ChildProcess::Spawn},
	{"kill", &ChildProcess::Kill},
	{0}
};

const ChildProcess::RegType ChildProcess::setters[] = {
	{0}
};

const ChildProcess::RegType ChildProcess::getters[] = {
	{0}
};

ChildProcess::ChildProcess(lua_State* L)
	: m_L(L)
{

}

ChildProcess::~ChildProcess() {

}


int ChildProcess::New(lua_State* L) {
	return luaL_error(L, "not implemented yet");
}

int ChildProcess::Spawn(lua_State* L) {
	return luaL_error(L, "not implemented yet");
}

int ChildProcess::Kill(lua_State* L) {

	return luaL_error(L, "not implemented yet");
}
