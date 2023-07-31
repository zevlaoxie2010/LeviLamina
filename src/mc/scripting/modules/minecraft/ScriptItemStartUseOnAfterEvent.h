#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemStartUseOnAfterEvent {

public:
    // prevent constructor by default
    ScriptItemStartUseOnAfterEvent& operator=(ScriptItemStartUseOnAfterEvent const&) = delete;
    ScriptItemStartUseOnAfterEvent()                                                 = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMSTARTUSEONAFTEREVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemStartUseOnAfterEvent();
#endif
    /**
     * @symbol ??0ScriptItemStartUseOnAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemStartUseOnAfterEvent(struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent const&);
    /**
     * @symbol
     * ?bind\@ScriptItemStartUseOnAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemStartUseOnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>
    bind();
    /**
     * @symbol ??4ScriptItemStartUseOnAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent&&);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
