#include "pendulumCard.h"
#include "spellType.h"
#include "monsterCard.h"
#include "spellCard.h"

namespace card{
    PendulumCard::PendulumCard(const std::string & _name, int _atk, int _def, int _scale)
        : Card(_name), monsterCard(_name, _int, _def), SpellCard(_name, SpellType::PENDULUM), scale(_scale){

    }
    int PendulumCard::getScale() const{
        return this->scale;
    }
    PendulumCard::~PendulumCard(){}
}