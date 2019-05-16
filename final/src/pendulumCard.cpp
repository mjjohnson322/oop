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
    void PendulumCard::createMemento(){
        pendMemento=MementoPendCard(this->name, this->effects,this->atk,this->def,this->level,this->type,this->scale);
        /*this->pendMemento->name=this->name;
        this->pendMemento->effects=this->effects;
        this->pendMemento->atk=this->atk;
        this->pendMemento->def=this->def;
        this->pendMemento->level=this->level;*/
    }
    void PendulumCard::restoreMemento(){
        this->name=this->pendMemento->getName();
        this->effects=this->pendMemento->getEeffects();
        this->atk=this->pendMemento->getAtk();
        this->def=this->pendMemento->getDef();
        this->level=this->pendMemento->getLevel();
        this->type=this->pendMemento->getType();
        this->scale=this->pendMemento->getScale();
    }
    PendulumCard::~PendulumCard(){
        delete pendMemento;
    }
}