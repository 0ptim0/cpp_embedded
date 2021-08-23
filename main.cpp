#include "stm32_conf.h"
#include <array>
#include <algorithm>
#include <cstdint>

namespace {
    std::array<std::uint8_t, 4U> counters;
}

class led_base {
public:
    virtual void toggle() = 0;
    virtual ~led_base() { }

    bool state_is_on() const {return is_on;}

protected:
    bool is_on;
    led_base() : is_on(false) { };

private:
    led_base(const led_base&) = delete;

    const led_base& operator=(const led_base&) = delete;
};

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
