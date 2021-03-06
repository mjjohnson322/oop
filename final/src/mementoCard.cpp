#include "mementoCard.h"
#include "spellType.h"
#include <vector>

namespace card{
    //MementoCard Implementation
    MementoCard::MementoCard(std::string _name, std::vector<std::string> _effects)
        : name(_name), effects(_effects) {
    }
    std::string MementoCard::getName() const{
        return this->name;
    }
    std::vector<std::string> MementoCard::getEffects() const{
        return this->effects;
    }
    MementoCard::~MementoCard(){}
    //*********************************************************

    //MementoMonsterCard Implementation
    MementoMonsterCard::MementoMonsterCard(std::string _name, std::vector<std::string> _effects,
        int _atk, int _def, int _level) 
        : MementoCard(_name, _effects), atk(_atk), def(_def), level(_level){}
    int MementoMonsterCard::getAtk() const{
        return this->atk;
    }
    int MementoMonsterCard::getDef() const{
        return this->def;
    }
    int MementoMonsterCard::getLevel() const{
        return this->level;
    }
    MementoMonsterCard::~MementoMonsterCard(){}
    //*********************************************************
    
    //MementoSpellCard Implementation
    MementoSpellCard::MementoSpellCard(std::string _name, std::vector<std::string> _effects, SpellType _type)
        : MementoCard(_name,_effects), type(_type){}
    SpellType MementoSpellCard::getSpellType() const{
        return this->type;
    }
    MementoSpellCard::~MementoSpellCard(){}
    //*********************************************************
    
    //MementoPendCard Implementation
    MementoPendCard::MementoPendCard(std::string _name, std::vector<std::string> _effects,
        int _atk, int _def, int _level, SpellType _type, int _scale) 
        : MementoCard(_name,_effects), MementoMonsterCard(_name, _effects, _atk, _def, _level), 
        MementoSpellCard(_name, _effects, SpellType::PENDULUM), scale(_scale){}
    int MementoPendCard::getScale() const{
        return this->scale;
    }
    MementoPendCard::~MementoPendCard(){}
    //*********************************************************
}