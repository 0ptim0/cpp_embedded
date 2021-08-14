#include "stm32_conf.h"
#include <array>
#include <algorithm>
#include <cstdint>

namespace {
    std::array<std::uint8_t, 4U> counters;
}

void blah() {
    std::fill(counters.begin(), 
                counters.end(), 
                    static_cast<std::uint8_t>(1U));
}

int main(void) {
    blah();
    while(1) {
    }
}
