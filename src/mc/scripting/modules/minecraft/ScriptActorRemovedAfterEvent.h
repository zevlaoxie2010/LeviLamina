#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorRemovedAfterEvent {

public:
    // prevent constructor by default
    ScriptActorRemovedAfterEvent& operator=(ScriptActorRemovedAfterEvent const&) = delete;
    ScriptActorRemovedAfterEvent(ScriptActorRemovedAfterEvent const&)            = delete;
    ScriptActorRemovedAfterEvent()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptActorRemovedAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorRemovedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorRemovedAfterEvent>
    bind();
    /**
     * @symbol ??1ScriptActorRemovedAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorRemovedAfterEvent();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
