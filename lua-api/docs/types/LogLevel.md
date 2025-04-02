---
layout: default
title: LogLevel
parent: Lua API
permalink: lua-api/types/LogLevel
---

# alias LogLevel
---



```lua
(alias) LogLevel = (integer|"debug"|"info"|"notice"|"warning"|"deprecated"|"error"|"fatal")
    | integer
    | "debug" -- LOG.DEBUG
    | "info" -- LOG.INFO
    | "notice" -- LOG.NOTICE (engine default)
    | "warning" -- LOG.WARNING
    | "deprecated" -- LOG.DEPRECATED
    | "error" -- LOG.ERROR
    | "fatal" -- LOG.FATAL

```




[<a href="https://github.com/rhys-vdw/spring/blob/c325950cb6df0b0ae70eaf2606e4f76adf857e4a/rts/Lua/LuaUtils.cpp#L1430-L1440" target="_blank">source</a>]

