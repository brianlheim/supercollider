// TODO(Brian) header

#include "Debugger/Debugger.h"

#include <thread>
#include <atomic>

namespace Debugger {

static std::thread debuggerThread;
static std::atomic<bool> running { false };

/// Actual running thread for debugger
static void debuggerThreadWork() {
    DEBUG_DEBUGGER("starting work");
    while (running) {
        // TODO(Brian) use a condition variable + sleep_for to synchronize
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        DEBUG_DEBUGGER("debugger thread -- waking up");
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

} // namespace Debugger
