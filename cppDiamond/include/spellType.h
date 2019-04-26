#pragma once
#include <iostream>

namespace card{
    enum SpellType{
        NORMAL,
        QUICKPLAY,
        CONTINUOUS,
        RITUAL
    };
    std::ostream& operator<<(std::ostream &out, const SpellType &type);
}