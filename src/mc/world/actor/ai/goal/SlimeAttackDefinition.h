#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SlimeAttackDefinition {

public:
    // prevent constructor by default
    SlimeAttackDefinition& operator=(SlimeAttackDefinition const&) = delete;
    SlimeAttackDefinition(SlimeAttackDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SlimeAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI SlimeAttackDefinition();
    /**
     * @symbol
     * ?buildSchema\@SlimeAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSlimeAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeAttackDefinition>>&);
    /**
     * @symbol ?initialize\@SlimeAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSlimeAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class SlimeAttackGoal&) const;
    // NOLINTEND
};
