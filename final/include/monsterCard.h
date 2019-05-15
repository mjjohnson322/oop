#pragma once
#include <iostream>
#include "card.h"

namespace card {
    class MonsterCard : public virtual Card {
        public: MonsterCard(std::string _name, int _atk, int _def, int _level);
        private: int atk;
        private: int def;
        private: int level;
        public: void setAtk(int _atk);
        public: void setDef(int _def);
        public: int getAtk() const;
        public: int getDef() const;
        public: void setLevel(int _level);
        public: int getLevel() const;
        public: ~MonsterCard();
    };
}