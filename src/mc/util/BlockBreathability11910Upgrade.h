#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockBreathabilityVersioning {

class BlockBreathability11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockBreathability11910Upgrade& operator=(BlockBreathability11910Upgrade const&);
    BlockBreathability11910Upgrade(BlockBreathability11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockBreathability11910Upgrade@BlockBreathabilityVersioning@@UEAA@XZ
    virtual ~BlockBreathability11910Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockBreathability11910Upgrade@BlockBreathabilityVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockBreathability11910Upgrade@BlockBreathabilityVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockBreathability11910Upgrade@BlockBreathabilityVersioning@@QEAA@XZ
    MCAPI BlockBreathability11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockBreathabilityVersioning
