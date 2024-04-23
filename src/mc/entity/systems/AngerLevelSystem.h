#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AngerLevelSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AngerLevelSystem& operator=(AngerLevelSystem const&);
    AngerLevelSystem(AngerLevelSystem const&);
    AngerLevelSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AngerLevelSystem@@UEAA@XZ
    virtual ~AngerLevelSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@AngerLevelSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND
};
