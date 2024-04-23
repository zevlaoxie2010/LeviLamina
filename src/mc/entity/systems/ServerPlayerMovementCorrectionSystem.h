#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerPlayerMovementCorrectionSystem {
// NOLINTBEGIN
// symbol:
// ?_afterMovementSimulation@ServerPlayerMovementCorrectionSystem@@YAXAEBVUserEntityIdentifierComponent@@AEAVActor@@AEBVPlayerAuthInputPacket@@AEBVReplayStateComponent@@AEAUStateVectorComponent@@@Z
MCAPI void
_afterMovementSimulation(class UserEntityIdentifierComponent const&, class Actor&, class PlayerAuthInputPacket const&, class ReplayStateComponent const&, struct StateVectorComponent&);

// symbol: ?createSystem@ServerPlayerMovementCorrectionSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace ServerPlayerMovementCorrectionSystem
