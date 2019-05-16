#include <iostream>
#include "spellType.h"
#include "card.h"
#include "spellCard.h"
#include "mementoCard.h"

namespace card{
    SpellCard::SpellCard(std::string _name, SpellType _type)
        : Card(_name), type(_type){}
    SpellType SpellCard::getSpellType() const{
        return this->type;
    }
    void SpellCard::createMemento(){
        spellMemento=MementoSpellCard(this->name, this->effects, this->type);
        /*this->spellMemento->name=this->name;
        this->spellMemento->effects=this->effects;
        this->spellMemento->type=this->type;*/
    }
    void SpellCard::restoreMemento(){
        this->name=this->spellMemento->getName();
        this->effects=this->spellMemento->getEffects();
        this->type=this->spellMemento->getType();
    }
    SpellCard::~SpellCard(){

    }
}