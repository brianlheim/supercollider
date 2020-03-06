// TODO(Brian) heading

#ifdef DEBUG_SCLANG_DEBUGGER
#    include <iostream>
#    define DEBUG_DEBUGGER(...)                                                                                        \
        std::cerr << "[debugger] " << __VA_ARGS__ << " (" << __FILE__ << ":" << __LINE__ << " [" << __FUNCTION__       \
                  << "])" << std::endl
#else
#    define DEBUG_DEBUGGER(...) /* no-op */
#endif // DEBUG_SCLANG_DEBUGGER

namespace Debugger {

// TODO(Brian) use RAII?

/// Initializes debugger thread
void initialize() noexcept;

/// Stops debugger thread
void finalize() noexcept;

} // namespace Debugger
