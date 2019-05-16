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
    class MementoMonsterCard : public virtual MementoCard {
        public: MementoMonsterCard(std::string _name, std::vector<std::string> _effects, int _atk, int _def, 
            int _level);
        private: int atk;
        private: int def;
        private: int level;
        public: int getAtk() const;
        public: int getDef() const;
        public: int getLevel() const;
        public: ~MementoMonsterCard();
    };
    class MementoSpellCard : public virtual MementoCard {
        public: MementoSpellCard(std::string _name, SpellType _type,
            std::vector<std::string> _effects);
        private: SpellType type;
        public: SpellType getSpellType() const;
        public: ~MementoSpellCard();
    };
    class MementoPendCard : public MementoMonsterCard, public MementoSpellCard {
        public: MementoPendCard(std::string _name, std::vector<std::string> _effects, int _atk, int _def, 
             int level, SpellType _type,int _scale);
        private: int scale;
        public: int getScale() const;
        public: ~MementoPendCard();
    };
}