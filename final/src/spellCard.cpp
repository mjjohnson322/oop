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
    void SpellCard::createMemento() override{
        spellMemento=new MementoSpellCard(this->name, this->effects, this->type);
        /*this->spellMemento->name=this->name;
        this->spellMemento->effects=this->effects;
        this->spellMemento->type=this->type;*/
    }
    void SpellCard::restoreMemento() override{
        this->name=this->spellMemento->name;
        this->effects=this->spellMemento->effects;
        this->type=this->spellMemento->type;
    }
    SpellCard::~SpellCard(){

    }
}