//============================================================================
// Name        : RPG.cpp
// Author      : Imed Elhadef
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Warrior.h"

using namespace std;

int main()
{

//     Creation of Warriors
    Warrior A,B("Gun_Fire", 20,"Imed"),C("Raffale", 30,"Haroun");
      // Fight!!
      cout << "Fight!!!" << endl;
    A.attack(&B);
    B.drinkPotionofLife(20);
    B.attack(&C);
    A.magicattack(&C);
    A.changeWeapon("Double edged", 40);
    B.attack(&A);
    A.drinkPotionofLife(20);
    A.magicattack(&C);
    //Game Over
    cout << "A" << endl;
    A.displayStatus();
    cout << endl << "B" << endl;
    B.displayStatus();
    cout << endl << "C" << endl;
    C.displayStatus();
    return 0;
}
