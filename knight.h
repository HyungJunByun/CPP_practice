#ifndef KNIGHT_H_
#define KNIGHT_H_
#include "sword.h"
#include "shield.h"
using std::cin;
using std::cout;
using std::endl;

class Knight{
    public:
    Knight(Shield newshield, Sword newsword);
    void act();
    private:
    Sword inven_sword;
    Shield inven_shield;
};
#endif