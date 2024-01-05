#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct Parameter {
public:
    // prevent constructor by default
    Parameter& operator=(Parameter const&);
    Parameter(Parameter const&);
    Parameter();

public:
    // NOLINTBEGIN
    // symbol: ??0Parameter@ClimateUtils@@QEAA@AEB_J0@Z
    MCAPI Parameter(int64 const&, int64 const&);

    // symbol: ??0Parameter@ClimateUtils@@QEAA@MM@Z
    MCAPI Parameter(float min, float max);

    // symbol: ?fromParameters@Parameter@ClimateUtils@@SA?AU12@AEBU12@0@Z
    MCAPI static struct ClimateUtils::Parameter
    fromParameters(struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&);

    // NOLINTEND
};

}; // namespace ClimateUtils
