---
layout: default
title: SetWMCaption
parent: Lua API
permalink: lua-api/globals/SetWMCaption
---

{% raw %}

# global SetWMCaption

---

```lua
function SetWMCaption(
  title: string,
  titleShort: string?
) ->  nil
```
@param `titleShort` - (Default: title)







Sets the window title for the process (default: "Spring <version>").

[<a href="https://github.com/rhys-vdw/RecoilEngine/blob/39a0440f8b3d03a340a3db9cfeb2e589c3e7d595/rts/Lua/LuaUnsyncedCtrl.cpp#L5173-L5184" target="_blank">source</a>]

The shortTitle is displayed in the OS task-bar (default: "Spring <version>").

NOTE: shortTitle is only ever possibly used under X11 (Linux & OS X), but not with QT (KDE) and never under Windows.


{% endraw %}