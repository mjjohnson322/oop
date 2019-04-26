#pragma once

#include "spellType.h"
#include "monsterCard.h"
#include "spellCard.h"

namespace card {
    class PendulumCard : public MonsterCard, public SpellCard {
        public: PendulumCard(const std::string & _name, int _atk, int _def, int _scale);
        private: int scale;
        public: int getScale() const;
        public: void setScale(int _scale);
        public: ~PencilCard();
    };
}