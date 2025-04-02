---
layout: default
title: SendToUnsynced
parent: Lua API
permalink: lua-api/globals/SendToUnsynced
---

# global SendToUnsynced


```lua
function SendToUnsynced(...: (nil|boolean|number|string))
```
@param `...` - Arguments. Typically the first argument is the name of a function to call.







Invoke `UnsyncedCallins:RecvFromSynced` callin with the given arguments.

[<a href="https://github.com/rhys-vdw/spring/blob/c325950cb6df0b0ae70eaf2606e4f76adf857e4a/rts/Lua/LuaHandleSynced.cpp#L1961-L1967" target="_blank">source</a>]
 See: UnsyncedCallins:RecvFromSynced


