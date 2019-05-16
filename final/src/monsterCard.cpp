#include "card.h"
#include "monsterCard.h"

namespace card{
    MonsterCard::MonsterCard(std::string _name, int _atk, int _def, int _level) 
        : Card(_name), atk(_atk), def(_def), level(_level){}
    void MonsterCard::setAtk(int _atk){
        atk=_atk;
    }
    void MonsterCard::setDef(int _def){
        def=_def;
    }
    int MonsterCard::getAtk() const{
        return atk;
    }
    int MonsterCard::getDef() const{
        return def;
    }
    void MonsterCard::setLevel(int _level){
        level=_level;
    }
    int MonsterCard::getLevel() const{
        return level;
    }
    void MonsterCard::createMemento(){
        monsterMemento=MementoMonsterCard(this->name, this->effects,this->atk,this->def,this->level);
        /*this->monsterMemento->name=this->name;
        this->monsterMemento->effects=this->effects;
        this->monsterMemento->atk=this->atk;
        this->monsterMemento->def=this->def;
        this->monsterMemento->level=this->level;*/
    }
    void MonsterCard::restoreMemento(){
        this->name=this->monsterMemento->getName();
        this->effects=this->monsterMemento->getEffects();
        this->atk=this->monsterMemento->getAtk();
        this->def=this->monsterMemento->getDef();
        this->level=this->monsterMemento->getLevel();
    }
    MonsterCard::~MonsterCard(){

    }
}