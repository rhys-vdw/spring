---
layout: default
title: ExplosionParams
parent: Lua API
permalink: lua-api/types/ExplosionParams
---

# class ExplosionParams





Parameters for explosion.

Please note the explosion defaults to 1 damage regardless of what it's defined in the weaponDef.
The weapondefID is only used for visuals and for passing into callins like UnitDamaged.

[<a href="https://github.com/rhys-vdw/spring/blob/c325950cb6df0b0ae70eaf2606e4f76adf857e4a/rts/Lua/LuaSyncedCtrl.cpp#L6981-L7000" target="_blank">source</a>]





## fields


### ExplosionParams.weaponDef

```lua
ExplosionParams.weaponDef : number
```




### ExplosionParams.owner

```lua
ExplosionParams.owner : number
```




### ExplosionParams.hitUnit

```lua
ExplosionParams.hitUnit : number
```




### ExplosionParams.hitFeature

```lua
ExplosionParams.hitFeature : number
```




### ExplosionParams.craterAreaOfEffect

```lua
ExplosionParams.craterAreaOfEffect : number
```




### ExplosionParams.damageAreaOfEffect

```lua
ExplosionParams.damageAreaOfEffect : number
```




### ExplosionParams.edgeEffectiveness

```lua
ExplosionParams.edgeEffectiveness : number
```




### ExplosionParams.explosionSpeed

```lua
ExplosionParams.explosionSpeed : number
```




### ExplosionParams.gfxMod

```lua
ExplosionParams.gfxMod : number
```




### ExplosionParams.impactOnly

```lua
ExplosionParams.impactOnly : boolean
```




### ExplosionParams.ignoreOwner

```lua
ExplosionParams.ignoreOwner : boolean
```




### ExplosionParams.damageGround

```lua
ExplosionParams.damageGround : boolean
```




