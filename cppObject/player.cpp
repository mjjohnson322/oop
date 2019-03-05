#include <iostream>
#include "player.h"

namespace player {
    Player::Player(const string & _name, const string & _characterClass, int _level)
        name(_name), characterClass(_characterClass), level(_level)
    {
    }
    string Player::getName() const {
        return this->name;
    }
    string Player::getCharacterClass() const {
        return this->characterClass;
    }
    int Player::getLevel() {
        return this->level;
    }
    void Player::setLevel(const int _level) {
        this->level=_level;
    }
    void Player::levelUp(){
        this->level++;
    }
}