---
layout: default
title: CreateRBOData
parent: Lua API
permalink: lua-api/types/CreateRBOData
---

{% raw %}

# class CreateRBOData





[<a href="https://github.com/rhys-vdw/RecoilEngine/blob/39a0440f8b3d03a340a3db9cfeb2e589c3e7d595/rts/Lua/LuaRBOs.cpp#L150-L155" target="_blank">source</a>]







---



## fields
---

### CreateRBOData.target
---
```lua
CreateRBOData.target : GL {
    POINTS: integer,
    LINES: integer,
    LINE_LOOP: integer,
    LINE_STRIP: integer,
    TRIANGLES: integer,
    TRIANGLE_STRIP: integer,
    TRIANGLE_FAN: integer,
    QUADS: integer,
    QUAD_STRIP: integer,
    POLYGON: integer,
    LINE_STRIP_ADJACENCY: integer,
    LINES_ADJACENCY: integer,
    ...
}
```










### CreateRBOData.format
---
```lua
CreateRBOData.format : GL {
    POINTS: integer,
    LINES: integer,
    LINE_LOOP: integer,
    LINE_STRIP: integer,
    TRIANGLES: integer,
    TRIANGLE_STRIP: integer,
    TRIANGLE_FAN: integer,
    QUADS: integer,
    QUAD_STRIP: integer,
    POLYGON: integer,
    LINE_STRIP_ADJACENCY: integer,
    LINES_ADJACENCY: integer,
    ...
}
```










### CreateRBOData.samples
---
```lua
CreateRBOData.samples : number?
```



any number here will result in creation of multisampled RBO










{% endraw %}