---
layout: default
title: ExplosionParams
parent: Lua API
permalink: lua-api/types/ExplosionParams
---

{% raw %}

# class ExplosionParams





Parameters for explosion.

Please note the explosion defaults to 1 damage regardless of what it's defined in the weaponDef.
The weapondefID is only used for visuals and for passing into callins like UnitDamaged.

[<a href="https://github.com/rhys-vdw/RecoilEngine/blob/39a0440f8b3d03a340a3db9cfeb2e589c3e7d595/rts/Lua/LuaSyncedCtrl.cpp#L7031-L7050" target="_blank">source</a>]







---



## fields
---

### ExplosionParams.weaponDef
---
```lua
ExplosionParams.weaponDef : number
```










### ExplosionParams.owner
---
```lua
ExplosionParams.owner : number
```










### ExplosionParams.hitUnit
---
```lua
ExplosionParams.hitUnit : number
```










### ExplosionParams.hitFeature
---
```lua
ExplosionParams.hitFeature : number
```










### ExplosionParams.craterAreaOfEffect
---
```lua
ExplosionParams.craterAreaOfEffect : number
```










### ExplosionParams.damageAreaOfEffect
---
```lua
ExplosionParams.damageAreaOfEffect : number
```










### ExplosionParams.edgeEffectiveness
---
```lua
ExplosionParams.edgeEffectiveness : number
```










### ExplosionParams.explosionSpeed
---
```lua
ExplosionParams.explosionSpeed : number
```










### ExplosionParams.gfxMod
---
```lua
ExplosionParams.gfxMod : number
```










### ExplosionParams.impactOnly
---
```lua
ExplosionParams.impactOnly : boolean
```










### ExplosionParams.ignoreOwner
---
```lua
ExplosionParams.ignoreOwner : boolean
```










### ExplosionParams.damageGround
---
```lua
ExplosionParams.damageGround : boolean
```












{% endraw %}