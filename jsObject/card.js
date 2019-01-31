"use strict";
class card {
    constructor(name, type) {
        this._name=name;
        this._type=type;
        this._effects=[];
        this._attack=0;
        this._defense=0;
    }
    //Get functions
    getName(){
        return this._name;
    }
    getAtk(){
        return this._attack;
    }
    getDef(){
        return this._defense;
    }
    getEffects(){
        return this._effects;
    }
    //Set functions
    setAtk(attack){
        this._attack=attack;
    }
    setDef(defense){
        this._defense=attack;
    }
    addEffect(effect){
        this._effects.push(effect)
    }
    printEffects(){
        for(var i = 0; i < this._effects.length; i++){ 
		console.log(this._effects[i]);
	}
    }
}

eightfingbears = new Card('Eight Bears','monster');
eightfingbears.addEffect('trample');
eightfingbears.printEffects();
