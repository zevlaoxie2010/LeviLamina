#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

class Localization {
public:
    // prevent constructor by default
    Localization& operator=(Localization const&);
    Localization(Localization const&);
    Localization();

public:
    // NOLINTBEGIN
    // symbol: ??0Localization@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit Localization(std::string const& code);

    // symbol: ??0Localization@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV0@@Z
    MCAPI Localization(std::string const& code, class Localization* fallbackLocale);

    // symbol: ?appendTranslations@Localization@@QEAAXAEBV1@@Z
    MCAPI void appendTranslations(class Localization const& other);

    // symbol:
    // ?appendTranslations@Localization@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@10@Z
    MCAPI void appendTranslations(
        std::string const&              fileContent,
        std::vector<std::string> const& blockedKeys,
        std::vector<std::string> const& allowedKeys,
        std::string const&              keyPrefix
    );

    // symbol:
    // ?get@Localization@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI bool get(std::string const&, std::string& out, std::vector<std::string> const& params) const;

    // symbol: ?getFullLanguageCode@Localization@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getFullLanguageCode() const;

    // symbol:
    // ?loadFromPack@Localization@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPackAccessStrategy@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI void loadFromPack(
        std::string const&              keyPrefix,
        class PackAccessStrategy const& accessStrategy,
        std::vector<std::string> const& allowedKeys
    );

    // symbol:
    // ?loadFromResourcePackManager@Localization@@QEAAXAEAVResourcePackManager@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI void loadFromResourcePackManager(
        class ResourcePackManager&      resourcePackManager,
        std::vector<std::string> const& blockedKeys
    );

    // symbol: ??1Localization@@QEAA@XZ
    MCAPI ~Localization();

    // symbol:
    // ?getLangFilePath@Localization@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class Core::PathBuffer<std::string> getLangFilePath(std::string const& langCode);

    // symbol:
    // ?getLanguageCode@Localization@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI static std::string getLanguageCode(std::string const& fullCode);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_get@Localization@@IEBA?AUOptionalString@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI struct OptionalString _get(std::string const&, std::vector<std::string> const& params) const;

    // symbol:
    // ?_getSimple@Localization@@IEBA?AUOptionalString@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct OptionalString _getSimple(std::string const&) const;

    // symbol:
    // ?_parseFormattedString@Localization@@IEBA?AUOptionalString@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct OptionalString _parseFormattedString(std::string const&) const;

    // symbol:
    // ?_replaceTokens@Localization@@IEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI void _replaceTokens(std::string& string, std::vector<std::string> const& params) const;

    // symbol:
    // ?_isCommaSeperatedLanguage@Localization@@KA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool _isCommaSeperatedLanguage(std::string const& langCode);

    // NOLINTEND
};
