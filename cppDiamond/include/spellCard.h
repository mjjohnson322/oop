#pragma once
#include <iostream>
#include "card.h"
#include "spellType.h"

namespace card {
    class SpellCard : public virtual Card {
        public: SpellCard(std::string _name, SpellType _type);
        private: SpellType type;
        public: SpellType getSpellType() const;
        public: ~SpellCard();
    };
}