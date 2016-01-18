/*
 * Weapon.h
 *
 *  Created on: 26 déc. 2015
 *      Author: Imed
 */

#ifndef WEAPON_H_
#define WEAPON_H_

#include <iostream>
#include <string>

class Weapon
{
    public:

    Weapon();
    Weapon(std::string name, int damage);
    void newWeapon(std::string name, int damage);
    void display();
    int getDamage() const;

    protected:

    std::string m_name;
    int m_damage;
};






#endif /* WEAPON_H_ */
