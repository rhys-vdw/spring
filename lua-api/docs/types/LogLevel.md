---
layout: default
title: LogLevel
parent: Lua API
permalink: lua-api/types/LogLevel
---

{% raw %}

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




[<a href="https://github.com/rhys-vdw/spring/blob/9fd62568c5a7ea87c1d4d95e010688b3b3e80c83/rts/Lua/LuaUtils.cpp#L1430-L1440" target="_blank">source</a>]


{% endraw %}