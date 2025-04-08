---
layout: default
title: LightParams
parent: Lua API
permalink: lua-api/types/LightParams
---

{% raw %}

# class LightParams





Parameters for lighting

[<a href="https://github.com/rhys-vdw/spring/blob/9fd62568c5a7ea87c1d4d95e010688b3b3e80c83/rts/Lua/LuaUnsyncedCtrl.cpp#L1514-L1540" target="_blank">source</a>]





## fields


### LightParams.position

```lua
LightParams.position : { py: number,pz: number,px: number }
```




### LightParams.direction

```lua
LightParams.direction : { dy: number,dz: number,dx: number }
```




### LightParams.ambientColor

```lua
LightParams.ambientColor : { red: number,green: number,blue: number }
```




### LightParams.diffuseColor

```lua
LightParams.diffuseColor : { red: number,blue: number,green: number }
```




### LightParams.specularColor

```lua
LightParams.specularColor : { red: number,green: number,blue: number }
```




### LightParams.intensityWeight

```lua
LightParams.intensityWeight : { ambientWeight: number,diffuseWeight: number,specularWeight: number }
```




### LightParams.ambientDecayRate

```lua
LightParams.ambientDecayRate : { ambientRedDecay: number,ambientGreenDecay: number,ambientBlueDecay: number }
```



Per-frame decay of `ambientColor` (spread over TTL frames)


### LightParams.diffuseDecayRate

```lua
LightParams.diffuseDecayRate : { diffuseGreenDecay: number,diffuseBlueDecay: number,diffuseRedDecay: number }
```



Per-frame decay of `diffuseColor` (spread over TTL frames)


### LightParams.specularDecayRate

```lua
LightParams.specularDecayRate : { specularBlueDecay: number,specularRedDecay: number,specularGreenDecay: number }
```



Per-frame decay of `specularColor` (spread over TTL frames)


### LightParams.decayFunctionType

```lua
LightParams.decayFunctionType : { diffuseDecayType: number,specularDecayType: number,ambientDecayType: number }
```



If value is `0.0` then the `*DecayRate` values will be interpreted as linear, otherwise exponential.


### LightParams.radius

```lua
LightParams.radius : number
```




### LightParams.fov

```lua
LightParams.fov : number
```




### LightParams.ttl

```lua
LightParams.ttl : number
```




### LightParams.priority

```lua
LightParams.priority : number
```




### LightParams.ignoreLOS

```lua
LightParams.ignoreLOS : boolean
```






{% endraw %}