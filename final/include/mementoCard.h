#pragma once
#include "card.h"
#include "pendulumCard.h"
#include "spellCard.h"
#include "monsterCard.h"
#include "spellType.h"
#include <vector>

namespace card{
    class MementoCard{
        public: MementoCard(std::string _name, std::vector<std::string> _effects);
        private: std::string name;
        private: std::vector<std::string> effects;
    }
    class MementoMonsterCard : public MementoCard {
        public: MementoMonsterCard(std::string _name, int _atk, int _def, 
            int _level, std::vector<std::string> _effects);
        private: def;
        private: atk;
        private: level;
    }
    class MementoSpellCard : public MementoCard {
        public: MementoSpellCard(std::string _name, SpellType _type, 
            std::vector<std::string> _effects);
        private: SpellType type;
    }
    class MementoPendCard : public MonsterCard, public SpellCard {
        public: MementoPendCard(std::string _name, int _atk, int _def, 
            int _scale, int level, std::vector<std::string> _effects);
        private: int scale;
    }
}