#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShulkerBoxBlockActor {

public:
    // prevent constructor by default
    ShulkerBoxBlockActor& operator=(ShulkerBoxBlockActor const&) = delete;
    ShulkerBoxBlockActor(ShulkerBoxBlockActor const&)            = delete;
    ShulkerBoxBlockActor()                                       = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKERBOXBLOCKACTOR
    /**
     * @symbol ?_detectEntityObstruction\@ShulkerBoxBlockActor\@\@MEBA_NAEAVBlockSource\@\@\@Z
     */
    MCVAPI bool _detectEntityObstruction(class BlockSource&) const;
    /**
     * @symbol
     * ?_getUpdatePacket\@ShulkerBoxBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /**
     * @symbol ?_onUpdatePacket\@ShulkerBoxBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /**
     * @symbol ?canPushInItem\@ShulkerBoxBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const;
    /**
     * @symbol ?getMaxStackSize\@ShulkerBoxBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol
     * ?getName\@ShulkerBoxBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol ?getObstructionAABB\@ShulkerBoxBlockActor\@\@MEBA?AVAABB\@\@XZ
     */
    MCVAPI class AABB getObstructionAABB() const;
    /**
     * @symbol ?load\@ShulkerBoxBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?onPlace\@ShulkerBoxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onPlace(class BlockSource&);
    /**
     * @symbol ?playCloseSound\@ShulkerBoxBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playCloseSound(class BlockSource&);
    /**
     * @symbol ?playOpenSound\@ShulkerBoxBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playOpenSound(class BlockSource&);
    /**
     * @symbol ?save\@ShulkerBoxBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const;
    /**
     * @symbol ?tick\@ShulkerBoxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource&);
#endif
    /**
     * @symbol
     * ??0ShulkerBoxBlockActor\@\@QEAA\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorRendererId\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI
    ShulkerBoxBlockActor(enum class BlockActorType, std::string const&, enum class BlockActorRendererId, class BlockPos const&);
    /**
     * @symbol ?itemAllowedInSlot\@ShulkerBoxBlockActor\@\@SA_NHAEBVItemStackBase\@\@H\@Z
     */
    MCAPI static bool itemAllowedInSlot(int, class ItemStackBase const&, int);
    /**
     * @symbol ?setFacingDir\@ShulkerBoxBlockActor\@\@QEAAXE\@Z
     */
    MCAPI void setFacingDir(unsigned char);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_calculateBB\@ShulkerBoxBlockActor\@\@AEAAXXZ
     */
    MCAPI void _calculateBB();
    /**
     * @symbol
     * ?_calculateMovementWithCollisions\@ShulkerBoxBlockActor\@\@AEBA?AVVec3\@\@AEAVBlockSource\@\@PEAVActor\@\@\@Z
     */
    MCAPI class Vec3 _calculateMovementWithCollisions(class BlockSource&, class Actor*) const;
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?ITEMS_SIZE\@ShulkerBoxBlockActor\@\@0HB
     */
    MCAPI static int const ITEMS_SIZE;
    // NOLINTEND
};
