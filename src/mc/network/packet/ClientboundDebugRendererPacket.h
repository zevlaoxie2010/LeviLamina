#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ClientboundDebugRendererPacket : public ::Packet {
public:
    // ClientboundDebugRendererPacket inner types define
    enum class Type {};

public:
    // prevent constructor by default
    ClientboundDebugRendererPacket& operator=(ClientboundDebugRendererPacket const&);
    ClientboundDebugRendererPacket(ClientboundDebugRendererPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ClientboundDebugRendererPacket@@UEAA@XZ
    virtual ~ClientboundDebugRendererPacket();

    // vIndex: 1, symbol: ?getId@ClientboundDebugRendererPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ClientboundDebugRendererPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ClientboundDebugRendererPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@ClientboundDebugRendererPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ClientboundDebugRendererPacket@@QEAA@XZ
    MCAPI ClientboundDebugRendererPacket();

    // symbol: ??0ClientboundDebugRendererPacket@@QEAA@W4Type@0@@Z
    MCAPI explicit ClientboundDebugRendererPacket(::ClientboundDebugRendererPacket::Type type);

    // symbol:
    // ??0ClientboundDebugRendererPacket@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@AEBVVec3@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@2@@Z
    MCAPI ClientboundDebugRendererPacket(
        std::string               text,
        class mce::Color const&   color,
        class Vec3 const&         position,
        std::chrono::milliseconds duration
    );

    // NOLINTEND
};
