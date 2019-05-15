#pragma once
#include "card.h"
#include "pendulumCard.h"
#include "spellCard.h"
#include "monsterCard.h"
#include "spellType.h"

namespace card{
    class MementoCard{
        private: std::string name;
        private: std::vector<std::string> effects;
        public: virtual void setState(std::string _name, std::vector<std::string> _effects);
    }
    class MementoMonsterCard : public MementoCard{
        private: def;
        private: atk;
        private: level;
        public: virtual void setState(std::string _name, std::vector<std::string> _effects,
            int _atk, int _def, int _level) override;
    }
    class MementoSpellCard : public MementoCard {
        private: SpellType spellType;
        public: virtual void setState(std::string _name,
            std::vector<std::string> _effects, SpellType _spellType) override;
    }
    class MementoPendCard : public MonsterCard, public SpellCard{
        private: int scale;
        public: virtual void setState(std::string _name, std::vector<std::string> _effects,
            int _atk, int _def, int _level, SpellType _spellType, int _scale) override;
    }
}