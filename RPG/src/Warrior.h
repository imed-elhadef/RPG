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
    Warrior(std::string nameWeapon, int weaponDamage,std::string name);
    ~Warrior();
    void receiveDamage(int nbDamage);
    void receiveMana(int nbMana);
    void attack(Warrior* target);
    void magicattack(Warrior* target);
    void drinkPotionofLife(int potion);
    void changeWeapon(std::string newWeapon, int newDamage);
    void displayStatus();

    protected:

    int m_mana;
    Weapon* m_weapon;
};




#endif /* WARRIOR_H_ */
