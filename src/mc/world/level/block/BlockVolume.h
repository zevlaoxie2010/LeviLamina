#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span_mut.h"

class BlockVolume {
public:
    // BlockVolume inner types declare
    // clang-format off
    struct BlockVolumeIter;
    // clang-format on

    // BlockVolume inner types define
    struct BlockVolumeIter {
    public:
        // prevent constructor by default
        BlockVolumeIter& operator=(BlockVolumeIter const&);
        BlockVolumeIter(BlockVolumeIter const&);
        BlockVolumeIter();

    public:
        // NOLINTBEGIN
        // symbol: ??9BlockVolumeIter@BlockVolume@@QEBA_NAEBU01@@Z
        MCAPI bool operator!=(struct BlockVolume::BlockVolumeIter const& c) const;

        // symbol: ??DBlockVolumeIter@BlockVolume@@QEAA?BU?$pair@PEBVBlock@@VPos@@@std@@XZ
        MCAPI std::pair<class Block const*, class Pos> const operator*();

        // symbol: ??EBlockVolumeIter@BlockVolume@@QEAAAEAU01@XZ
        MCAPI struct BlockVolume::BlockVolumeIter& operator++();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockVolume& operator=(BlockVolume const&);
    BlockVolume(BlockVolume const&);
    BlockVolume();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockVolume@@QEAA@V?$buffer_span_mut@PEBVBlock@@@@HHHAEBVBlock@@H@Z
    MCAPI BlockVolume(
        class buffer_span_mut<class Block const*> buffer,
        int                                       width,
        int                                       height,
        int                                       depth,
        class Block const&                        initBlock,
        int
    );

    // symbol: ?begin@BlockVolume@@QEBA?AUBlockVolumeIter@1@XZ
    MCAPI struct BlockVolume::BlockVolumeIter begin() const;

    // symbol:
    // ?computeHeightMap@BlockVolume@@QEBA?AV?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@XZ
    MCAPI std::unique_ptr<std::vector<short>> computeHeightMap() const;

    // symbol: ?end@BlockVolume@@QEBA?AUBlockVolumeIter@1@XZ
    MCAPI struct BlockVolume::BlockVolumeIter end() const;

    // symbol: ?findHighestNonAirBlock@BlockVolume@@QEBAFXZ
    MCAPI short findHighestNonAirBlock() const;

    // symbol: ?getAboveTopSolidBlock@BlockVolume@@QEBAFAEBVBlockPos@@_N11@Z
    MCAPI short
    getAboveTopSolidBlock(class BlockPos const& start, bool dimensionShowsSky, bool includeWater, bool includeLeaves)
        const;

    // symbol: ?getDimensions@BlockVolume@@QEBA?AVPos@@XZ
    MCAPI class Pos getDimensions() const;

    // symbol: ?getIndexBounds@BlockVolume@@QEBAIXZ
    MCAPI uint getIndexBounds() const;

    // symbol: ?index@BlockVolume@@QEBAIAEBVBlockPos@@@Z
    MCAPI uint index(class BlockPos const& pos) const;

    // symbol: ?index@BlockVolume@@QEBAIAEBVPos@@@Z
    MCAPI uint index(class Pos const& pos) const;

    // symbol: ?indexNoBoundsCheck@BlockVolume@@QEBAIAEBVBlockPos@@@Z
    MCAPI uint indexNoBoundsCheck(class BlockPos const& pos) const;

    // symbol: ?indexNoBoundsCheck@BlockVolume@@QEBAIAEBVPos@@@Z
    MCAPI uint indexNoBoundsCheck(class Pos const& pos) const;

    // symbol: ?isInBounds@BlockVolume@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isInBounds(class BlockPos const& pos) const;

    // symbol: ?isInBounds@BlockVolume@@QEBA_NAEBVPos@@@Z
    MCAPI bool isInBounds(class Pos const& pos) const;

    // NOLINTEND
};
