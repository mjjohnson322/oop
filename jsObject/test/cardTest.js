card = require('../card.js');
assert = require('assert');

describe('Array', function() {
	describe('#constructor()', function() {
		it('should have its constructed name be bear', function(){
			let bearCard = new card.Card('Bear');
			assert.equal(bearCard.name,'Bear');
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
