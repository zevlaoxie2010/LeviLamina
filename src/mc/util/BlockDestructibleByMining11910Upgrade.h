#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockDestroyTimeVersioning {

class BlockDestructibleByMining11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDestructibleByMining11910Upgrade& operator=(BlockDestructibleByMining11910Upgrade const&);
    BlockDestructibleByMining11910Upgrade(BlockDestructibleByMining11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockDestructibleByMining11910Upgrade@BlockDestroyTimeVersioning@@UEAA@XZ
    virtual ~BlockDestructibleByMining11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockDestructibleByMining11910Upgrade@BlockDestroyTimeVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockDestructibleByMining11910Upgrade@BlockDestroyTimeVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockDestructibleByMining11910Upgrade@BlockDestroyTimeVersioning@@QEAA@XZ
    MCAPI BlockDestructibleByMining11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockDestroyTimeVersioning
