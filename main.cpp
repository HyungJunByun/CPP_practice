#include "sword.h"
#include "shield.h"
#include "knight.h"
int main(){
    Sword sword;
    Shield shield;
    Knight knight(shield, sword);
    knight.act();
    return 0;
}