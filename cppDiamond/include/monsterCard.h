#pragma once
#include <iostream>
#include "card.h"

namespace card {
    class MonsterCard : public Card {
        public: MonsterCard(const std::string & _name, int _atk, int _def);
        private: int atk;
        private: int def;
        public: void setAtk(int _atk);
        public: void setDef(int _def);
        public: int getAtk() const;
        public: int getDef() const;
        public: ~MonsterCard();
    };
}