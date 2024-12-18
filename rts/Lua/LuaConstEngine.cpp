/* This file is part of the Spring engine (GPL v2 or later), see LICENSE.html */

#include "LuaConstEngine.h"
#include "LuaHandle.h"
#include "LuaUtils.h"
#include "Game/GameVersion.h"
#include "System/Platform/Misc.h"

/******************************************************************************
 * Engine constants
 * @see rts/Lua/LuaConstEngine.cpp
******************************************************************************/

/***
 * @class FeatureSupport
 * @field hasExitOnlyYardmaps boolean
 * @field rmlUiApiVersion integer
 */

/***
 * Engine specific information.
 *
 * @table Engine
 * @field version string Returns the same as `spring  *sync-version`, e.g. "92"
 * @field versionFull string
 * @field versionPatchSet string
 * @field buildFlags string (unsynced only) Gets additional engine buildflags, e.g. "OMP" or "MT-Sim DEBUG"
 * @field FeatureSupport FeatureSupport table containing various engine features as keys; use for cross-version compat
 * @field wordSize number indicates the build type and is either 32 or 64 (or 0 in synced code)
 */

bool LuaConstEngine::PushEntries(lua_State* L)
{
	LuaPushNamedString(L, "version"        ,                                    SpringVersion::GetSync()          );
	LuaPushNamedString(L, "versionFull"    , (!CLuaHandle::GetHandleSynced(L))? SpringVersion::GetFull()      : "");
	LuaPushNamedString(L, "versionPatchSet", (!CLuaHandle::GetHandleSynced(L))? SpringVersion::GetPatchSet()  : "");
	LuaPushNamedString(L, "buildFlags"     , (!CLuaHandle::GetHandleSynced(L))? SpringVersion::GetAdditional(): "");

	#if 0
	LuaPushNamedNumber(L, "nativeWordSize", (!CLuaHandle::GetHandleSynced(L))? Platform::NativeWordSize() * 8: 0); // engine
	LuaPushNamedNumber(L, "systemWordSize", (!CLuaHandle::GetHandleSynced(L))? Platform::SystemWordSize() * 8: 0); // op-sys
	#else
	LuaPushNamedNumber(L, "wordSize", (!CLuaHandle::GetHandleSynced(L))? Platform::NativeWordSize() * 8: 0);
	#endif


	lua_pushliteral(L, "FeatureSupport");
	lua_createtable(L, 0, 2);
		LuaPushNamedBool(L, "hasExitOnlyYardmaps", true);
		LuaPushNamedNumber(L, "rmlUiApiVersion", 1);
	lua_rawset(L, -3);

	return true;
}

