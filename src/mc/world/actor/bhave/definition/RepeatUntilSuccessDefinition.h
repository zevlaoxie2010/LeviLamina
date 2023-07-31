#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RepeatUntilSuccessDefinition : public ::BehaviorDefinition {

public:
    // prevent constructor by default
    RepeatUntilSuccessDefinition& operator=(RepeatUntilSuccessDefinition const&) = delete;
    RepeatUntilSuccessDefinition(RepeatUntilSuccessDefinition const&)            = delete;
    RepeatUntilSuccessDefinition()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@RepeatUntilSuccessDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const&);
    // NOLINTEND
};
