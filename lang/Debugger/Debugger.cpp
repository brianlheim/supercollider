// TODO(Brian) header

#include "Debugger/Debugger.h"

#include <iostream>

namespace Debugger {

void initialize() noexcept { std::cout << "HELLO WORLD -- debugger" << std::endl; }

void finalize() noexcept { std::cout << "GOODBYE WORLD -- debugger" << std::endl; }

} // namespace Debugger
