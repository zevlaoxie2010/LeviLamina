#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockLiquidContainerComponent.h"

namespace ScriptModuleMinecraft {

class ScriptBlockLavaContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent {

public:
    // prevent constructor by default
    ScriptBlockLavaContainerComponent& operator=(ScriptBlockLavaContainerComponent const&) = delete;
    ScriptBlockLavaContainerComponent(ScriptBlockLavaContainerComponent const&)            = delete;
    ScriptBlockLavaContainerComponent()                                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKLAVACONTAINERCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptBlockLavaContainerComponent();
#endif
    /**
     * @symbol
     * ?bind\@ScriptBlockLavaContainerComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockLavaContainerComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockLavaContainerComponent>
    bind();
    /**
     * @symbol ??4ScriptBlockLavaContainerComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptBlockLavaContainerComponent&
    operator=(class ScriptModuleMinecraft::ScriptBlockLavaContainerComponent&&);
    /**
     * @symbol ?ComponentId\@ScriptBlockLavaContainerComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
