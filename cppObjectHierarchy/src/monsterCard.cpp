#include "card.h"
#include "monsterCard.h"

namespace card{
    MonsterCard::MonsterCard(const std::string & _name, int _atk=0, int _def=0) 
        : Card(_name), atk(_atk), def(_def){}
    void setAtk(int _atk){
        this->atk=_atk;
    }
    void setDef(int _def){
        this->def=_def;
    }
    int getAtk(){
        return this->atk;
    }
    int getDef(){
        this->def;
    }
}