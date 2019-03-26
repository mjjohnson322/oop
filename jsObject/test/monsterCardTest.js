monsterCard = require('../monsterCard.js');
assert = require('assert');

describe('Array', function() {
	describe('#constructor()', function() {
		it('should have its constructed name be bear', function(){
			let bearCard = new monsterCard.MonsterCard('Bear');
			assert.equal(bearCard.name,'Bear');
		});
	});
	describe('#setAtk()', function(){
		it('should have 1000 attack', function(){
			let bearCard = new monsterCard.MonsterCard('Bear');
			bearCard.atk = 1000;
			assert.equal(bearCard.atk,1000);
		});
		it('should throw an exception when atk is not a valid number', function(){
			let bearCard = new monsterCard.MonsterCard('Bear');
			//bearCard.atk = 'String';
        });
    });
    describe('#addEffect', function() {
		it('should have the added effect trample', function(){
			let bearCard = new card.Card('Bear');
			bearCard.addEffect('Trample');
			assert.equal(bearCard.effects[0],'Trample');
		});
	});
});
