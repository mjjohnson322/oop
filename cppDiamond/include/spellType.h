#pragma once
#include <iostream>

namespace card{
    enum SpellType{
        NORMAL,
        QUICKPLAY,
        CONTINUOUS,
        RITUAL,
        PENDULUM
    };
    std::ostream& operator<<(std::ostream &out, const SpellType &type);
}