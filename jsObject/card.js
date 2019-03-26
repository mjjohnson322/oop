"use strict";
class Card {
    constructor(name) {
        this._name=name;
        this._effects=[];
    }
    //Get functions
    get name(){
        return this._name;
    }
    get effects(){
        return this._effects;
    }
    //Set functions
    addEffect(effect){
        this._effects.push(effect)
    }
    printEffects(){
        for(var i = 0; i < this._effects.length; i++){ 
		    console.log(this._effects[i]);
	    }
    }
}

exports.Card = Card;

/*class CardTest {
    constructor(){
        this.instance = new Card('Test', 'Test');
    }
    testAddEffect(effect) {
        this.instance.addEffect(effect);
        if (this.instance.effects[0] === effect){
            console.log("Effect Okay");
        }
    }
    testSetAtk(attack){
        if(typeof attack === "number")
            this.instance.attack = attack;
        else throw "Attack must be number";
        if (attack === this.instance.attack){
            console.log("Attack Okay");
        }
        else {
            throw "Test failed";
        }
    }
    testSetDef(defense){
        if(typeof defense === "number")
            this.instance.defense = defense;
        else throw "Defense must be number";
        if (defense === this.instance.defense){
            console.log("Defense Okay");
        }
        else {
            throw "Test failed";
        }
    }
}

var eightbears = new Card('Eight Bears','monster');
eightbears.addEffect('trample');
eightbears.printEffects();

var cardTest = new CardTest();
cardTest.testAddEffect("TEST");
cardTest.testSetAtk(1000);
cardTest.testSetDef(1000);
*/
