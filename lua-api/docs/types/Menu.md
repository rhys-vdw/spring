---
layout: default
title: Menu
parent: Lua API
permalink: lua-api/types/Menu
---

{% raw %}

# class Menu


- supers: Callins




[<a href="https://github.com/rhys-vdw/spring/blob/9fd62568c5a7ea87c1d4d95e010688b3b3e80c83/rts/Lua/LuaMenu.cpp#L34-L37" target="_blank">source</a>]



## methods


### Menu.ActivateMenu

```lua
function Menu.ActivateMenu()
```





Called whenever LuaMenu is on with no game loaded.

[<a href="https://github.com/rhys-vdw/spring/blob/9fd62568c5a7ea87c1d4d95e010688b3b3e80c83/rts/Lua/LuaMenu.cpp#L372-L375" target="_blank">source</a>]


### Menu.ActivateGame

```lua
function Menu.ActivateGame()
```





Called whenever LuaMenu is on with a game loaded.

[<a href="https://github.com/rhys-vdw/spring/blob/9fd62568c5a7ea87c1d4d95e010688b3b3e80c83/rts/Lua/LuaMenu.cpp#L393-L396" target="_blank">source</a>]


### Menu.AllowDraw

```lua
function Menu.AllowDraw() -> allowDraw boolean
```





Enables Draw{Genesis,Screen,ScreenPost} callins if true is returned,
otherwise they are called once every 30 seconds. Only active when a game
isn't running.

[<a href="https://github.com/rhys-vdw/spring/blob/9fd62568c5a7ea87c1d4d95e010688b3b3e80c83/rts/Lua/LuaMenu.cpp#L413-L420" target="_blank">source</a>]






{% endraw %}