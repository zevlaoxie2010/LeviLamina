#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EventResponseFactory {

public:
    // prevent constructor by default
    EventResponseFactory& operator=(EventResponseFactory const&) = delete;
    EventResponseFactory(EventResponseFactory const&)            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EVENTRESPONSEFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EventResponseFactory();
#endif
    /**
     * @symbol ??0EventResponseFactory\@\@QEAA\@XZ
     */
    MCAPI EventResponseFactory();
    /**
     * @symbol
     * ?initSchema\@EventResponseFactory\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void initSchema(std::string const&, class SemVersion const&);
    // NOLINTEND
};
