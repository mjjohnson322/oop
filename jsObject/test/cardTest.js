card = require('../card.js');
assert = require('assert');

describe('Array', function() {
	describe('#constructor()', function() {
		it('bearCard should have its constructed name be bear', function(){
			let bearCard = new card.Card('Bear','monster')
			assert.equal(bearCard.name,'Bear');
		});
	});
});
