#pragma once

#include <string>
#include <thread>

#include "ll/api/LLAPI.h"

/////////////////////// LL Configs ///////////////////////

namespace ll {

struct LLConfig {
    int version = 3;

    bool        debugMode = false;
    std::string language  = "system";
    struct {
        bool colorLog = true;
        int  logLevel = 4;
    } logger{};

    struct ExtraMainPluginSettings {
        bool enabled      = true;
        bool alwaysLaunch = false;
    };
    ExtraMainPluginSettings scriptEngine{};
    ExtraMainPluginSettings economyCore{};

    struct {
        struct {
            bool        enabled = true;
            std::string path    = R"(.\plugins\LeviLamina\CrashLogger.exe)";
        } crashLogger{};

        struct {
            bool                     enabled         = true;
            std::vector<std::string> autoInstallPath = {R"(.\plugins\AddonsHelper\)"};
            std::string              tempPath        = {R"(.\plugins\AddonsHelper\Temp\)"};
            std::set<std::string>    extension       = {".mcpack", ".mcaddon", ".zip"};
        } addonsHelper{};

        struct {
            std::string path = R"(.\plugins\LeviLamina\7z\7za.exe)";
        } compressor{};

        struct {
            struct {
                bool fixArrayTagCompareBug = true;
            } bugfixes{};

            bool tpdimCommand             = true;
            bool settingsCommand          = true;
            bool disableAutoCompactionLog = true;
        } tweak{};

        bool checkRunningBDS    = true;
        bool simpleServerLogger = true;

        std::unordered_map<std::string, std::string> resourcePackEncryptionMap = {
            {"<UUID>", "<KEY>"}
        };

    } modules{};
};

LLETAPI LLConfig globalConfig;

bool loadLLConfig();

bool saveLLConfig();
} // namespace ll