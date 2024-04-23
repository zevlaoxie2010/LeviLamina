#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ChemistryStickItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    ChemistryStickItem& operator=(ChemistryStickItem const&);
    ChemistryStickItem(ChemistryStickItem const&);
    ChemistryStickItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ChemistryStickItem@@UEAA@XZ
    virtual ~ChemistryStickItem();

    // vIndex: 24, symbol: ?setMaxDamage@ChemistryStickItem@@UEAAAEAVItem@@H@Z
    virtual class Item& setMaxDamage(int maxDamage);

    // vIndex: 40, symbol: ?showsDurabilityInCreative@ChemistryStickItem@@UEBA_NXZ
    virtual bool showsDurabilityInCreative() const;

    // vIndex: 48, symbol: ?isValidRepairItem@ChemistryStickItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool isValidRepairItem(
        class ItemStackBase const&   source,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 57, symbol: ?uniqueAuxValues@ChemistryStickItem@@UEBA_NXZ
    virtual bool uniqueAuxValues() const;

    // vIndex: 71, symbol: ?use@ChemistryStickItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 73, symbol:
    // ?useTimeDepleted@ChemistryStickItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 76, symbol: ?hurtActor@ChemistryStickItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack& instance, class Actor& actor, class Mob& attacker) const;

    // vIndex: 79, symbol: ?mineBlock@ChemistryStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool
    mineBlock(class ItemStack& item, class Block const& block, int x, int y, int z, class Actor* owner) const;

    // vIndex: 86, symbol: ?inventoryTick@ChemistryStickItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool
    inventoryTick(class ItemStack& item, class Level& level, class Actor& owner, int slot, bool selected) const;

    // vIndex: 90, symbol: ?fixupCommon@ChemistryStickItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // symbol: ??0ChemistryStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ChemistryStickItem(std::string const& name, int id);

    // symbol: ?getColorType@ChemistryStickItem@@SA?AW4ItemColor@@H@Z
    MCAPI static ::ItemColor getColorType(int data);

    // symbol: ?isActive@ChemistryStickItem@@SA_NH@Z
    MCAPI static bool isActive(int data);

    // symbol: ?isChemistryStick@ChemistryStickItem@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool isChemistryStick(class ItemStackBase const& item);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_getColorName@ChemistryStickItem@@IEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI std::string _getColorName(int) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_storeActivationTimestamp@ChemistryStickItem@@AEBAXAEAVItemStack@@_KH@Z
    MCAPI void _storeActivationTimestamp(class ItemStack& item, uint64 curTime, int desiredPercent) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?ACTIVATION_TIMESTAMP_TAG@ChemistryStickItem@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ACTIVATION_TIMESTAMP_TAG;

    // symbol: ?ACTIVE_BIT@ChemistryStickItem@@0HB
    MCAPI static int const ACTIVE_BIT;

    // symbol: ?COLOR_BITS@ChemistryStickItem@@0HB
    MCAPI static int const COLOR_BITS;

    // symbol: ?COLOR_MASK@ChemistryStickItem@@0HB
    MCAPI static int const COLOR_MASK;

    // symbol: ?DAMAGE_BITS@ChemistryStickItem@@0HB
    MCAPI static int const DAMAGE_BITS;

    // symbol: ?DAMAGE_MASK@ChemistryStickItem@@0HB
    MCAPI static int const DAMAGE_MASK;

    // symbol: ?DAMAGE_START_BIT@ChemistryStickItem@@0HB
    MCAPI static int const DAMAGE_START_BIT;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $ACTIVATION_TIMESTAMP_TAG() { return ACTIVATION_TIMESTAMP_TAG; }

    static auto& $ACTIVE_BIT() { return ACTIVE_BIT; }

    static auto& $COLOR_BITS() { return COLOR_BITS; }

    static auto& $COLOR_MASK() { return COLOR_MASK; }

    static auto& $DAMAGE_BITS() { return DAMAGE_BITS; }

    static auto& $DAMAGE_MASK() { return DAMAGE_MASK; }

    static auto& $DAMAGE_START_BIT() { return DAMAGE_START_BIT; }

    // NOLINTEND
};
