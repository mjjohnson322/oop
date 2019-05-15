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
    void MonsterCard::createMemento() override{
        pendMemento=new MementoCard(this->name, this->effects,this->atk,this->def,this->level,this->type,this->scale);
        /*this->pendMemento->name=this->name;
        this->pendMemento->effects=this->effects;
        this->pendMemento->atk=this->atk;
        this->pendMemento->def=this->def;
        this->pendMemento->level=this->level;*/
    }
    void MonsterCard::retoreMemento() override{
        this->name=this->pendMemento->name;
        this->effects=this->pendMemento->effects;
        this->atk=this->pendMemento->atk;
        this->def=this->pendMemento->def;
        this->level=this->pendMemento->level;
        this->type=this->pendMemento->type;
        this->scale=this->pendMemento->scale;
    }
    PendulumCard::~PendulumCard(){
    }
}