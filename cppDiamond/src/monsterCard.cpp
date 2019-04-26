#include "card.h"
#include "monsterCard.h"

namespace card{
    MonsterCard::MonsterCard(const std::string & _name, int _atk, int _def) 
        : Card(_name), atk(_atk), def(_def){}
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
    MonsterCard::~MonsterCard(){}
}