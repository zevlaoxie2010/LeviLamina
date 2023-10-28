#include "ll/core/CrashLogger.h"

#include <filesystem>

#include "mc/common/Common.h"
#include "mc/common/SharedConstants.h"

#include "ll/api/Logger.h"
#include "ll/api/ServerInfo.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinHelper.h"
#include "ll/core/Config.h"

ll::Logger crashLogger("CrashLogger");

bool ll::CrashLogger::startCrashLoggerProcess() {
    if (IsDebuggerPresent()) {
        crashLogger.info("ll.crashLogger.existsingDebuggerDetected"_tr);
        return true;
    }
    if (IsWineEnvironment()) {
        crashLogger.info("ll.crashLogger.wineDetected"_tr);
        return true;
    }

    STARTUPINFO si;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    PROCESS_INFORMATION pi;

    SECURITY_ATTRIBUTES sa;
    sa.bInheritHandle       = TRUE;
    sa.lpSecurityDescriptor = nullptr;
    sa.nLength              = sizeof(SECURITY_ATTRIBUTES);

    wchar_t     daemonCmd[MAX_PATH];
    std::string serverVersion = fmt::format("{}.{:0>2}", ll::getBdsVersion(), SharedConstants::RevisionVersion);
    wsprintf(
        daemonCmd,
        L"%ls %u \"%ls\"",
        ll::StringUtils::str2wstr(globalConfig.modules.crashLogger.path).c_str(),
        GetCurrentProcessId(),
        ll::StringUtils::str2wstr(serverVersion).c_str()
    );
    if (!CreateProcess(nullptr, daemonCmd, &sa, &sa, TRUE, 0, nullptr, nullptr, &si, &pi)) {
        crashLogger.error("ll.crashLogger.error.cannotCreateDaemonProcess"_tr);
        crashLogger.error(GetLastErrorMessage());
        return false;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return true;
}

void ll::CrashLogger::initCrashLogger(bool enableCrashLogger) {

    if (!enableCrashLogger) {
        crashLogger.warn("ll.crashLogger.warning.crashLoggerDisabled.1"_tr);
        crashLogger.warn("ll.crashLogger.warning.crashLoggerDisabled.2"_tr);
        crashLogger.warn("ll.crashLogger.warning.crashLoggerDisabled.3"_tr);
        crashLogger.warn("");
        crashLogger.warn("ll.crashLogger.warning.crashLoggerDisabled.4"_tr);
        return;
    }
    // Start CrashLogger
    if (!startCrashLoggerProcess()) {
        crashLogger.warn("ll.crashLogger.init.fail.msg"_tr);
        crashLogger.warn("ll.crashLogger.init.fail.tip"_tr);
    }
}