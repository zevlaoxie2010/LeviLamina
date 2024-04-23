#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class GoalSelectorSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GoalSelectorSystem& operator=(GoalSelectorSystem const&);
    GoalSelectorSystem(GoalSelectorSystem const&);
    GoalSelectorSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GoalSelectorSystem@@UEAA@XZ
    virtual ~GoalSelectorSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@GoalSelectorSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickGoalSelectorComponent@GoalSelectorSystem@@CAXAEAVActorOwnerComponent@@@Z
    MCAPI static void _tickGoalSelectorComponent(class ActorOwnerComponent&);

    // NOLINTEND
};
