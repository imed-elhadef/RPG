/*
 * Warrior.cpp
 *
 *  Created on: 26 déc. 2015
 *      Author: Imed
 */


#include "Warrior.h"

using namespace std;

int Warrior::counter = 0;

Warrior::Warrior(): m_power(100),money(0), m_weapon(0)
{
 m_weapon = new Weapon();
 ++counter;
}

Warrior::Warrior(string name, int magic_power):Human(name),m_power(magic_power),money(0), m_weapon(0)
{
  m_weapon = new Weapon();
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
	money+=100;
    target->receiveDamage(m_weapon->getDamage());
    if (!target->m_life)
     cout << "Your are died!! GAME IS OVER :" << target->m_name << endl;

}

void Warrior::magicattack(Warrior* target)
{
	money+=200;
    target->receiveMana(m_power);
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


void Warrior::changeWeapon(int price)
{
	if (money<price)
	cout << "You haven't enough money to change weapon!!"<< endl;
	else
		switch (price)
		{
		case 100:
			money-=price;
			m_weapon->newWeapon("Gun_Fire", 20);
			cout << "You have changed a new weapon!!, your weapon now is:"<< endl;
			m_weapon->display();
			break;
		case 200:
			money-=price;
			m_weapon->newWeapon("Super Gun", 30);
			cout << "You have changed a new weapon!!, your weapon now is:"<< endl;
			m_weapon->display();
			break;
		case 300:
			money-=price;
			m_weapon->newWeapon("Double edged", 40);
			cout << "You have changed a new weapon!!, your weapon now is:"<< endl;
			m_weapon->display();
			break;
		case 400:
			money-=price;
			m_weapon->newWeapon("Raffale", 50);
			cout << "You have changed a new weapon!!, your weapon now is:"<< endl;
			m_weapon->display();
			break;
		default:
			cout << "Your price is not correct!!!" << endl;
		}
}

int Warrior::instance_nbr()
{
	return counter;
}

void Warrior::displayStatus()
{
    cout << "Life: " << m_life << endl;
    cout << "Magic Mower : " << m_power << endl;
    m_weapon->display();
}

