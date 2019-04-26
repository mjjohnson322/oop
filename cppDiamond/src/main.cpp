#include <iostream>
#include <assert.h>
#include "monsterCard.h"
#include "card.h"
#include "pendulumCard.h"
#include "spellCard.h"
#include "spellType.h"

using namespace card;

void testSetAtk(PendulumCard test){
    test.setAtk(100);
    assert(test.getAtk()==100);
}

void testSetDef(PendulumCard test){
    test.setDef(100);
    assert(test.getDef()==100);
}

void testName(PendulumCard test){
    assert(test.getName()=="Test");
}

void testSpellType(PendulumCard test){
    assert(test.getSpellType()==SpellType::PENDULUM);
}

void testScale(PendulumCard test){
    assert(test.getScale()==8);
}

void test(PendulumCard test){
    testSetAtk(test);
    testSetDef(test);
    testName(test);
    testSpellType(test);
    testScale(test);
    //testAddEff(test);
    std::cout << "All tests passed" << std::endl;
}

int main(int argc, char **argv){
    const std::string testStr="Test";
    PendulumCard testCard = PendulumCard(testStr, 0, 0, 8);
    test(testCard);
    return 0;
}