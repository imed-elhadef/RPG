/*
 * Warrior.cpp
 *
 *  Created on: 26 déc. 2015
 *      Author: Imed
 */


#include "Warrior.h"

using namespace std;

int Warrior::counter = 0;

Warrior::Warrior(): m_mana(100), m_weapon(0)
{
 m_weapon = new Weapon();
 ++counter;
}

Warrior::Warrior(string nameWeapon, int WeaponDamage, string name):Human(name),m_mana(100), m_weapon(0)/*,m_weapon(nameWeapon, WeaponDamage)*/
{
  m_weapon = new Weapon(nameWeapon, WeaponDamage);
  ++counter;
}

Warrior::~Warrior()
{
 delete m_weapon;
 --counter;
}

void Warrior::receiveMana(int nbMana)
{
    m_life -= nbMana;

    if (m_life < 0)
    {
        m_life = 0;
    }
}


void Warrior::receiveDamage(int nbDamage)
{
    m_life -= nbDamage;

    if (m_life < 0)
    {
        m_life = 0;
    }
}

void Warrior::attack(Warrior* target)
{
    target->receiveDamage(m_weapon->getDamage());
    if (!target->m_life)
     cout << "Your are died!! GAME IS OVER :" << target->m_name << endl;

}

void Warrior::magicattack(Warrior* target)
{
    target->receiveMana(m_mana);
    if (!target->m_life)
     cout << "Your are died!! GAME IS OVER :" << target->m_name << endl;
}

void Warrior::drinkPotionofLife(int potion)
{
    m_life += potion;

    if (m_life > 200)
    {
        m_life = 200;
    }
cout << "Your life is now : " << m_life << endl;
}

void Warrior::changeWeapon(std::string newWeapon, int newDamage)
{
    m_weapon->change(newWeapon, newDamage);
    cout << "You have changed a new weapon!!, your weapon now is:"<< endl;
    m_weapon->display();
}

int Warrior::instance_nbr()
{
	return counter;
}

void Warrior::displayStatus()
{
    cout << "Life: " << m_life << endl;
    cout << "Mana : " << m_mana << endl;
    m_weapon->display();
}

