#include "pendulumCard.h"
#include "spellType.h"
#include <iostream>

namespace card{
    PendulumCard::PendulumCard(std::string _name, int _atk, int _def, int _scale, int _level)
        : Card(_name), MonsterCard(_name, _atk, _def, _level), SpellCard(_name, SpellType::PENDULUM), scale(_scale){

    }
    int PendulumCard::getScale() const {
        return this->scale;
    }
    void PendulumCard::setScale(int _scale){
        this->scale=_scale;
    }
    PendulumCard::~PendulumCard(){
    }
}