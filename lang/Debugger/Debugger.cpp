// TODO(Brian) header

#include "Debugger/Debugger.h"

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>

#include <thread>
#include <atomic>

namespace Debugger {

namespace bfs = boost::filesystem;

static std::thread debuggerThread;
static std::atomic<bool> running { false };
static bfs::path shouldPauseFlagFile { "sclang_debugger_flag" };
static std::atomic<bool> shouldPauseFlag { false };

/// Actual running thread for debugger
static void debuggerThreadWork() {
    DEBUG_DEBUGGER("starting work");
    while (running) {
        // TODO(Brian) use a condition variable + sleep_for to synchronize
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        boost::system::error_code ec;
        shouldPauseFlag = bfs::exists(shouldPauseFlagFile, ec); // ignore ec
    }
    DEBUG_DEBUGGER("stopping work");
}

void initialize() noexcept {
    DEBUG_DEBUGGER("hello");
    running = true;
    debuggerThread = std::thread(debuggerThreadWork);
}

void finalize() noexcept {
    DEBUG_DEBUGGER("goodbye");
    running = false;
    debuggerThread.join();
}

bool shouldPause() noexcept { return shouldPauseFlag; }

void pause(const VMGlobals* g) noexcept {
    DEBUG_DEBUGGER("interpreter requested pause");
    while (shouldPauseFlag) {
        // TODO(Brian) use condition var
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    DEBUG_DEBUGGER("unpaused interpreter");
}

} // namespace Debugger
