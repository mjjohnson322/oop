#pragma once
#include <iostream>
#include "card.h"
#include "spellType.h"

namespace card {
    class SpellCard : public Card {
        public: SpellCard(const std::string & _name, const SpellType & type);
        private: const SpellType type();
        public: SpellType getSpellType() const;
    };
}