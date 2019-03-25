#include <iostream>
#include <assert.h>
#include "player.h"

using namespace player;

void testGetName(Player player1){
    assert(player1.getName()=="Name");
}
void testGetClass(Player player1){
    assert(player1.getCharacterClass()=="Wizard");
}
void testGetLevel(Player player1){
    assert(player1.getLevel()==1);
}
void testSetLevel(Player player1){
    player1.setLevel(10);
    assert(player1.getLevel()==10);
}
void testLevelUp(Player player1){
    player1.levelUp();
    assert(player1.getLevel()==2);
}

void test(Player player1){
    testGetLevel(player1);
    testGetClass(player1);
    testGetName(player1);
    testSetLevel(player1);
    testLevelUp(player1);
    printf("All tests passed\n");
}


int main(int argc, char **argv){
    Player player1 = Player("Name", "Wizard", 1);
    test(player1);
    return 0;
}
