class card {
    constructor(name, type) {
        this.name=name;
        this.type=type;
        this.effects=[];
        this.attack=0;
        this.defense=0;
    }
    //Get functions
    getName(){
        return this.name;
    }
    getAtk(){
        return this.attack;
    }
    getDef(){
        return this.defense;
    }
    getEffects(){
        return this.effects;
    }
    //Set functions
    setAtk(attack){
        this.attack=attack;
    }
    setDef(defense){
        this.defense=attack;
    }
    addEffect(effect){
        this.effects.push(effect)
    }
}