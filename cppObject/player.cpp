#include <iostream>
#include "player.h"

namespace player {
    Player::Player(const std::string & _name, const std::string & _characterClass, int _level)
        : name(_name), characterClass(_characterClass), level(_level)
    {
    }
    std::string Player::getName() const {
        return this->name;
    }
    std::string Player::getCharacterClass() const {
        return this->characterClass;
    }
    int Player::getLevel() const{
        return this->level;
    }
    void Player::setLevel(const int & _level) {
        this->level=_level;
    }
    void Player::levelUp(){
        this->level++;
    }
}