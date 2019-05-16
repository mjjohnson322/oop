#pragma once
#include "spellType.h"
#include "spellCard.h"
#include "monsterCard.h"
#include "mementoCard.h"

namespace card {
    class PendulumCard : public MonsterCard, public SpellCard {
        private: MementoPendCard *pendMemento;
        public: PendulumCard(std::string _name, int _atk, int _def, int _scale, int _level);
        protected: int scale;
        public: int getScale() const;
        public: void setScale(int _scale);
        public: void createMemento() override;
        public: void restoreMemento() override;
        public: ~PendulumCard();
    };
}