#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/BiomeSource.h"

class FixedBiomeSource : public ::BiomeSource {
public:
    // prevent constructor by default
    FixedBiomeSource& operator=(FixedBiomeSource const&);
    FixedBiomeSource(FixedBiomeSource const&);
    FixedBiomeSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FixedBiomeSource@@UEAA@XZ
    virtual ~FixedBiomeSource() = default;

    // vIndex: 1, symbol: ?fillBiomes@FixedBiomeSource@@UEBAXAEAVLevelChunk@@AEBVChunkLocalNoiseCache@@@Z
    virtual void fillBiomes(class LevelChunk& levelChunk, class ChunkLocalNoiseCache const&) const;

    // vIndex: 2, symbol: ?getBiomeArea@FixedBiomeSource@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    // vIndex: 3, symbol: ?getBiomeArea@FixedBiomeSource@@UEBA?AVBiomeArea@@AEBVBoundingBox@@IAEBUGetBiomeOptions@@@Z
    virtual class BiomeArea
    getBiomeArea(class BoundingBox const& area, uint scale, struct GetBiomeOptions const&) const;

    // vIndex: 4, symbol: ?containsOnly@FixedBiomeSource@@UEBA_NHHHHV?$span@$$CB_K$0?0@gsl@@@Z
    virtual bool containsOnly(int, int, int, int, gsl::span<uint64 const> allowed) const;

    // symbol: ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
    MCVAPI class Biome const* getBiome(class BlockPos const& blockPos) const;

    // symbol: ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@AEBUGetBiomeOptions@@@Z
    MCVAPI class Biome const* getBiome(struct GetBiomeOptions const& getBiomeOptions) const;

    // symbol: ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@HHH@Z
    MCVAPI class Biome const* getBiome(int blockX, int blockY, int blockZ) const;

    // symbol: ??0FixedBiomeSource@@QEAA@AEBVBiome@@@Z
    MCAPI explicit FixedBiomeSource(class Biome const& fixedBiome);

    // NOLINTEND
};
