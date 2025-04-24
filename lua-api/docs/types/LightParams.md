---
layout: default
title: LightParams
parent: Lua API
permalink: lua-api/types/LightParams
---

{% raw %}

# class LightParams





Parameters for lighting

[<a href="https://github.com/rhys-vdw/RecoilEngine/blob/39a0440f8b3d03a340a3db9cfeb2e589c3e7d595/rts/Lua/LuaUnsyncedCtrl.cpp#L1514-L1540" target="_blank">source</a>]







---



## fields
---

### LightParams.position
---
```lua
LightParams.position : { pz: number,px: number,py: number }
```










### LightParams.direction
---
```lua
LightParams.direction : { dz: number,dx: number,dy: number }
```










### LightParams.ambientColor
---
```lua
LightParams.ambientColor : { blue: number,red: number,green: number }
```










### LightParams.diffuseColor
---
```lua
LightParams.diffuseColor : { green: number,blue: number,red: number }
```










### LightParams.specularColor
---
```lua
LightParams.specularColor : { green: number,red: number,blue: number }
```










### LightParams.intensityWeight
---
```lua
LightParams.intensityWeight : { diffuseWeight: number,specularWeight: number,ambientWeight: number }
```










### LightParams.ambientDecayRate
---
```lua
LightParams.ambientDecayRate : { ambientGreenDecay: number,ambientBlueDecay: number,ambientRedDecay: number }
```



Per-frame decay of `ambientColor` (spread over TTL frames)








### LightParams.diffuseDecayRate
---
```lua
LightParams.diffuseDecayRate : { diffuseRedDecay: number,diffuseBlueDecay: number,diffuseGreenDecay: number }
```



Per-frame decay of `diffuseColor` (spread over TTL frames)








### LightParams.specularDecayRate
---
```lua
LightParams.specularDecayRate : { specularRedDecay: number,specularGreenDecay: number,specularBlueDecay: number }
```



Per-frame decay of `specularColor` (spread over TTL frames)








### LightParams.decayFunctionType
---
```lua
LightParams.decayFunctionType : { ambientDecayType: number,diffuseDecayType: number,specularDecayType: number }
```



If value is `0.0` then the `*DecayRate` values will be interpreted as linear, otherwise exponential.








### LightParams.radius
---
```lua
LightParams.radius : number
```










### LightParams.fov
---
```lua
LightParams.fov : number
```










### LightParams.ttl
---
```lua
LightParams.ttl : number
```










### LightParams.priority
---
```lua
LightParams.priority : number
```










### LightParams.ignoreLOS
---
```lua
LightParams.ignoreLOS : boolean
```












{% endraw %}