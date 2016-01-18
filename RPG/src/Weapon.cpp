/*
 * Weapon.cpp
 *
 *  Created on: 26 déc. 2015
 *      Author: Imed
 */
#include "Weapon.h"

using namespace std;

Weapon::Weapon() : m_name("Gun"), m_damage(10)
{

}

Weapon::Weapon(string name, int damage):m_name(name), m_damage(damage)
{

}



void Weapon::newWeapon(string name, int damage)
{
    m_name = name;
    m_damage = damage;
}

void Weapon::display()
{
    cout << "Weapon : " << m_name << " (Damage : " << m_damage << ")" << endl;
}

int Weapon::getDamage() const
{
    return m_damage;
}






