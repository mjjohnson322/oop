#include <iostream>
#include <card.h>

namespace card {
    class MonsterCard : public Card {
        public: MonsterCard(const std::string & _name, int _atk=0, int _def=0);
        private: int atk;
        private: int def;
        public: void setAtk(int _atk);
        public: void setDef(int _def);
        public: int getAtk();
        public: int getDef();
    };
}