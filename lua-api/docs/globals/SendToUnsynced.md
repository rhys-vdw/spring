---
layout: default
title: SendToUnsynced
parent: Lua API
permalink: lua-api/globals/SendToUnsynced
---

{% raw %}

# global SendToUnsynced

---

```lua
function SendToUnsynced(...: (boolean|number|string...)?)
```
@param `...` - Arguments. Typically the first argument is the name of a function to call.







Invoke `UnsyncedCallins:RecvFromSynced` callin with the given arguments.

[<a href="https://github.com/rhys-vdw/RecoilEngine/blob/39a0440f8b3d03a340a3db9cfeb2e589c3e7d595/rts/Lua/LuaHandleSynced.cpp#L1966-L1972" target="_blank">source</a>]


{% endraw %}