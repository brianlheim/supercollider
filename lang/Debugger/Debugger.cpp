// TODO(Brian) header

#include "Debugger/Debugger.h"

namespace Debugger {

void initialize() noexcept { DEBUG_DEBUGGER("hello"); }

void finalize() noexcept { DEBUG_DEBUGGER("goodbye"); }

} // namespace Debugger
