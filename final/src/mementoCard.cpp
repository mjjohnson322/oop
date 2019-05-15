#include "pendulumCard.h"
#include "monsterCard.h"
#include "spellCard.h"
#include "card.h"
#include "mementoCard.h"
#include "spellType.h"
#include <vector>

namespace card{
    //MementoCard Implementation
    MementoCard::MementoCard(std::string _name, std::vector<std::string> _effects)
        :name(_name),effects(_effects){}
    
    //*********************************************************

    //MementoMonsterCard Implementation
    MementoMonsterCard::MementoMonsterCard(std::string _name, int _atk, int _def, 
        int _level, std::vector<std::string> _effects) 
        : MementoCard(_name, _effects), atk(_atk), def(_def), level(_level){}

    //*********************************************************
    
    //MementoSpellCard Implementation
    MementoSpellCard::MementoSpellCard(std::string _name, SpellType _type, 
        std::vector<std::string> _effects)
        : MementoCard(_name,_effects), type(_type){}

    //*********************************************************
    
    //MementoPendCard Implementation
    MementoPendCard::MementoPendCard(std::string _name, int _atk, int _def, int _scale, int _level,
        std::vector<std::string> _effects) 
        : Card(_name), MonsterCard(_name, _atk, _def, _level), SpellCard(_name, SpellType::PENDULUM), scale(_scale){}

    //*********************************************************
}