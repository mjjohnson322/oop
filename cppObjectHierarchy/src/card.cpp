#include <card.h>

namespace card{
    Card::Card(const std::string & _name) : name(_name){}
    std::string getName() const{
        return this->name;
    }
    void Card::addEffect(std::string _effect){
        this->effects.push_back(_effect);
    }
    void Card::printEffects() const{
        for(i=0;i < this->effects.size;i++){
            cout << "Effect " << i << ": " << effects[i] << endl;
        }
    }
}