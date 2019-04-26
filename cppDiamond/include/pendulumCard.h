#pragma once

#include "spellType.h"
#include "spellCard.h"
#include "monsterCard.h"

namespace card {
    class PendulumCard : public MonsterCard, public SpellCard {
        public: PendulumCard(std::string _name, int _atk, int _def/*, int _scale*/);
        /*private: int scale;
        public: int getScale() const;
        public: void setScale(int _scale);*/
        public: ~PendulumCard();
    };
}