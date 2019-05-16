#include "card.h"
#include "mementoCard.h"
#include <vector>

namespace card{
    Card::Card(std::string _name)
        : name(_name){
    }
    std::string Card::getName() const{
        return this->name;
    }
    void Card::createMemento(){
        memento=new MementoCard(this->name, this->effects);
        /*this->memento->name=this->name;
        this->memento->effects=this->effects;*/
    }
    void Card::restoreMemento(){
        this->name=this->memento->getName();
        this->effects=this->memento->getEffects();
    }
    void Card::addEffect(std::string _effect){
        this->effects.push_back(_effect);
    }
    void Card::printEffects() const{
        if(this->effects.empty()){
            std::cout << "Card has no effects" << std::endl;
        }
        else{
            for(int i=0;i < this->effects.size();i++){
                std::cout << "Effect " << i << ": " << this->effects[i] << std::endl;
            }
        }
    }
    
    Card::~Card(){
    }
}