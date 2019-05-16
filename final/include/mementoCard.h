#pragma once
#include "spellType.h"
#include <vector>

namespace card{
    class MementoCard{
        public: MementoCard(std::string _name, std::vector<std::string> _effects);
        private: std::string name;
        private: std::vector<std::string> effects;
        public: virtual std::string getName() const;
        public: virtual std::vector<std::string> getEffects() const;
        public: virtual ~MementoCard();
    };
    class MementoMonsterCard : public MementoCard {
        public: MementoMonsterCard(std::string _name, int _atk, int _def, 
            int _level, std::vector<std::string> _effects);
        private: int atk;
        private: int def;
        private: int level;
        public: int getAtk() const;
        public: int getDef() const;
        public: int getLevel() const;
        public: ~MementoMonsterCard();
    };
    class MementoSpellCard : public MementoCard {
        public: MementoSpellCard(std::string _name, SpellType _type,
            std::vector<std::string> _effects);
        private: SpellType type;
        public: SpellType getSpellType() cosnt;
        public: ~MementoSpellCard();
    };
    class MementoPendCard : public MementoMonsterCard, public MementoSpellCard {
        public: MementoPendCard(std::string _name, int _atk, int _def, 
            int _scale, int level, std::vector<std::string> _effects);
        private: int scale;
        public: int getScale() const;
        public: ~MementoPendCard();
    };
}