/*
 * Warrior.h
 *
 *  Created on: 26 déc. 2015
 *      Author: Imed
 */

#ifndef WARRIOR_H_
#define WARRIOR_H_


#include "Weapon.h"
#include "Human.h"
#include <iostream>
#include <string>

class Warrior : public Human
{
    public:
    Warrior();
    Warrior(std::string name, int magic_power);
    ~Warrior();
    void receiveDamage(int nbDamage);
    void receiveMana(int nbMana);
    void attack(Warrior* target);
    void magicattack(Warrior* target);
    void drinkPotionofLife(int potion);
    void changeWeapon(int price);
    void displayStatus();
    static int instance_nbr ();//Number of warriors

    private:
    int m_power; //Magic power
    int money;
    static int counter; //To count number of warriors
    Weapon* m_weapon;
};




#endif /* WARRIOR_H_ */
