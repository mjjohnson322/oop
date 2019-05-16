#include "mementoCard.h"
#include "spellType.h"
#include <vector>

namespace card{
    //MementoCard Implementation
    MementoCard::MementoCard(std::string _name, std::vector<std::string> _effects)
        : name(_name), effects(_effects){}
    std::string MementoCard::getName(){
        return this->name;
    }
    std::vector<std::string> MementoCard::getEffects(){
        return this->effects;
    }
    //*********************************************************

    //MementoMonsterCard Implementation
    MementoMonsterCard::MementoMonsterCard(std::string _name, int _atk, int _def, 
        int _level, std::vector<std::string> _effects) 
        : MementoCard(_name, _effects), atk(_atk), def(_def), level(_level){}
    int MementoMonsterCard::getAtk(){
        return this->atk;
    }
    int MementoMonsterCard::getDef(){
        return this->def;
    }
    int MementoMonsterCard::getLevel(){
        return this->level;
    }

    //*********************************************************
    
    //MementoSpellCard Implementation
    MementoSpellCard::MementoSpellCard(std::string _name, SpellType _type, 
        std::vector<std::string> _effects)
        : MementoCard(_name,_effects), type(_type){}
    SpellType MementoSpellCard::getSpellType(){
        return this->type;
    }
    //*********************************************************
    
    //MementoPendCard Implementation
    MementoPendCard::MementoPendCard(std::string _name, int _atk, int _def, int _scale, int _level,
        std::vector<std::string> _effects) 
        : Card(_name), MementoMonsterCard(_name, _atk, _def, _level), MementoSpellCard(_name, SpellType::PENDULUM), scale(_scale){}
    int MementoPendCard::getScale(){
        return this->scale;
    }
    //*********************************************************
}