// TODO(Brian) heading

#ifdef DEBUG_SCLANG_DEBUGGER
#    include <iostream>
#    define DEBUG_DEBUGGER(...)                                                                                        \
        std::cerr << "[debugger] " << __VA_ARGS__ << " (" << __FILE__ << ":" << __LINE__ << " [" << __FUNCTION__       \
                  << "])" << std::endl
#else
#    define DEBUG_DEBUGGER(...) /* no-op */
#endif // DEBUG_SCLANG_DEBUGGER

struct VMGlobals;

namespace Debugger {

// TODO(Brian) use RAII?

/// Initializes debugger thread
void initialize() noexcept;

/// Stops debugger thread
void finalize() noexcept;

/// Returns whether the interpreter should pause for debugging
bool shouldPause() noexcept;

/// Called from interpreter -- requests a pause, which suspends the thread until the debugger allows it to resume
void pause(const VMGlobals* g) noexcept;

} // namespace Debugger
