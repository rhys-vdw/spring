---
layout: default
title: CallAsTeam
parent: Lua API
permalink: lua-api/globals/CallAsTeam
---

{% raw %}

# global CallAsTeam


```lua
function CallAsTeam(
  teamID: integer,
  func: fun(...),
  ...: any
) -> The any...
```
@param `teamID` - Team ID.

@param `func` - The function to call.

@param `...` - Arguments to pass to the function.


@return `The` - return values of the function.






[<a href="https://github.com/rhys-vdw/spring/blob/9fd62568c5a7ea87c1d4d95e010688b3b3e80c83/rts/Lua/LuaHandleSynced.cpp#L2333-L2339" target="_blank">source</a>]


{% endraw %}