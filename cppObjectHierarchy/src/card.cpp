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
        if(this->effects.empty()){
            cout << "Card has no effects" << endl;
        }
        else{
            for(i=0;i < this->effects.size;i++){
                cout << "Effect " << i << ": " << this->effects[i] << endl;
            }
        }
    }
}