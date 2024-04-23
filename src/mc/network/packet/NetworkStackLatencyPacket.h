#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class NetworkStackLatencyPacket : public ::Packet {
public:
    std::chrono::steady_clock::time_point createTime; // this+0x30
    bool                                  fromServer; // this+0x38

    // prevent constructor by default
    NetworkStackLatencyPacket& operator=(NetworkStackLatencyPacket const&);
    NetworkStackLatencyPacket(NetworkStackLatencyPacket const&);
    NetworkStackLatencyPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NetworkStackLatencyPacket@@UEAA@XZ
    virtual ~NetworkStackLatencyPacket() = default;

    // vIndex: 1, symbol: ?getId@NetworkStackLatencyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@NetworkStackLatencyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@NetworkStackLatencyPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@NetworkStackLatencyPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
