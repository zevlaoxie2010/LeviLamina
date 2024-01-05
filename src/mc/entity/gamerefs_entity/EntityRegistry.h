#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

class EntityRegistry {
public:
    // prevent constructor by default
    EntityRegistry& operator=(EntityRegistry const&);
    EntityRegistry(EntityRegistry const&);

public:
    // NOLINTBEGIN
    // symbol: ??0EntityRegistry@@QEAA@XZ
    MCAPI EntityRegistry();

    // symbol: ??0EntityRegistry@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit EntityRegistry(std::string identifier);

    // symbol: ?getWeakRef@EntityRegistry@@QEAA?AV?$WeakRefT@UEntityRegistryRefTraits@@@@XZ
    MCAPI class WeakRefT<struct EntityRegistryRefTraits> getWeakRef();

    // symbol: ??1EntityRegistry@@QEAA@XZ
    MCAPI ~EntityRegistry();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_createEntity@EntityRegistry@@IEAA?AVEntityContext@@XZ
    MCAPI class EntityContext _createEntity();

    // symbol: ?_destroyEntity@EntityRegistry@@IEAAXVEntityContext@@@Z
    MCAPI void _destroyEntity(class EntityContext entity);

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?mRegistryCount@EntityRegistry@@1U?$atomic@I@std@@A
    MCAPI static std::atomic<uint> mRegistryCount;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mRegistryCount() { return mRegistryCount; }

    // NOLINTEND
};
