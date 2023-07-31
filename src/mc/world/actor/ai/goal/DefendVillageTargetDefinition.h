#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DefendVillageTargetDefinition {

public:
    // prevent constructor by default
    DefendVillageTargetDefinition& operator=(DefendVillageTargetDefinition const&) = delete;
    DefendVillageTargetDefinition(DefendVillageTargetDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0DefendVillageTargetDefinition\@\@QEAA\@XZ
     */
    MCAPI DefendVillageTargetDefinition();
    /**
     * @symbol
     * ?buildSchema\@DefendVillageTargetDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefendVillageTargetDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DefendVillageTargetDefinition>>&);
    /**
     * @symbol
     * ?initialize\@DefendVillageTargetDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDefendVillageTargetGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DefendVillageTargetGoal&) const;
    // NOLINTEND
};
