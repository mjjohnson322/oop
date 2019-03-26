"use strict";
card = require('./card.js');
class MonsterCard extends card.Card {
    constructor(name) {
        super(name);
        this._attack=0;
        this._defense=0;
    }
    //Get functions
    get atk(){
        return this._attack;
    }
    get def(){
        return this._defense;
    }
    //Set functions
    set atk(attack){
        this._attack=attack;
    }
    set def(defense){
        this._defense=defense;
    }
}

exports.MonsterCard = MonsterCard;