#include <iostream>
#include <assert.h>
#include "monsterCard.h"
#include "card.h"

using namespace card;

void testSetAtk(MonsterCard test){
    test.setAtk(100);
    assert(test.getAtk()==100);
}

void testSetDef(MonsterCard test){
    test.setDef(100);
    assert(test.getDef()==100);
}

void testName(MonsterCard test){
    assert(test.getName()=="Test");
}

void test(MonsterCard test){
    testSetAtk(test);
    testSetDef(test);
    testName(test);
    //testAddEff(test);
    std::cout << "All tests passed" << std::endl;
}

int main(int argc, char **argv){
    MonsterCard *testCard = new MonsterCard("Test");
    test(testCard);
    return 0;
}