---
layout: default
title: CreateRBOData
parent: Lua API
permalink: lua-api/types/CreateRBOData
---

# class CreateRBOData





[<a href="https://github.com/rhys-vdw/spring/blob/c325950cb6df0b0ae70eaf2606e4f76adf857e4a/rts/Lua/LuaRBOs.cpp#L150-L155" target="_blank">source</a>]





## fields


### CreateRBOData.target

```lua
CreateRBOData.target : GL {
    cmd: integer,
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
    ...
}
```




### CreateRBOData.format

```lua
CreateRBOData.format : GL {
    cmd: integer,
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
    ...
}
```




### CreateRBOData.samples

```lua
CreateRBOData.samples : number?
```



any number here will result in creation of multisampled RBO


