#include "knight.h"
Knight::Knight(Shield newshield, Sword newSword):inven_shield(newshield), inven_sword(newSword){

}
void Knight::act(){
    cout<<"The Knight uses the items:"<<endl;
    inven_sword.attack();
    inven_shield.defend();
}