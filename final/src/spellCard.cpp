#include <iostream>
#include "spellType.h"
#include "card.h"
#include "spellCard.h"

namespace card{
    SpellCard::SpellCard(std::string _name, SpellType _type)
        : Card(_name), type(_type){}
    SpellType SpellCard::getSpellType() const{
        return this->type;
    }
    SpellCard::~SpellCard(){

    }
}