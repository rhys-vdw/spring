---
layout: default
title: LightParams
parent: Lua API
permalink: lua-api/types/LightParams
---

# class LightParams





Parameters for lighting

[<a href="https://github.com/rhys-vdw/spring/blob/c325950cb6df0b0ae70eaf2606e4f76adf857e4a/rts/Lua/LuaUnsyncedCtrl.cpp#L1514-L1540" target="_blank">source</a>]





## fields


### LightParams.position

```lua
LightParams.position : { px: number,pz: number,py: number }
```




### LightParams.direction

```lua
LightParams.direction : { dz: number,dy: number,dx: number }
```




### LightParams.ambientColor

```lua
LightParams.ambientColor : { blue: number,red: number,green: number }
```




### LightParams.diffuseColor

```lua
LightParams.diffuseColor : { red: number,green: number,blue: number }
```




### LightParams.specularColor

```lua
LightParams.specularColor : { red: number,green: number,blue: number }
```




### LightParams.intensityWeight

```lua
LightParams.intensityWeight : { diffuseWeight: number,ambientWeight: number,specularWeight: number }
```




### LightParams.ambientDecayRate

```lua
LightParams.ambientDecayRate : { ambientBlueDecay: number,ambientRedDecay: number,ambientGreenDecay: number }
```



Per-frame decay of `ambientColor` (spread over TTL frames)


### LightParams.diffuseDecayRate

```lua
LightParams.diffuseDecayRate : { diffuseGreenDecay: number,diffuseRedDecay: number,diffuseBlueDecay: number }
```



Per-frame decay of `diffuseColor` (spread over TTL frames)


### LightParams.specularDecayRate

```lua
LightParams.specularDecayRate : { specularRedDecay: number,specularGreenDecay: number,specularBlueDecay: number }
```



Per-frame decay of `specularColor` (spread over TTL frames)


### LightParams.decayFunctionType

```lua
LightParams.decayFunctionType : { ambientDecayType: number,diffuseDecayType: number,specularDecayType: number }
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




