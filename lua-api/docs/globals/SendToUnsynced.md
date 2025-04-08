---
layout: default
title: SendToUnsynced
parent: Lua API
permalink: lua-api/globals/SendToUnsynced
---

{% raw %}

# global SendToUnsynced


```lua
function SendToUnsynced(...: (nil|boolean|number|string))
```
@param `...` - Arguments. Typically the first argument is the name of a function to call.







Invoke `UnsyncedCallins:RecvFromSynced` callin with the given arguments.

[<a href="https://github.com/rhys-vdw/spring/blob/9fd62568c5a7ea87c1d4d95e010688b3b3e80c83/rts/Lua/LuaHandleSynced.cpp#L1966-L1972" target="_blank">source</a>]
 See: UnsyncedCallins:RecvFromSynced



{% endraw %}