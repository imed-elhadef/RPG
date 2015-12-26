/*
 * Human.h
 *
 *  Created on: 26 déc. 2015
 *      Author: Imed
 */

#ifndef HUMAN_H_
#define HUMAN_H_

#include <iostream>
#include <string>

class Human
{
    public:

    Human();
    Human(std::string name);
    virtual ~Human();
    bool isAlave();
    virtual void displayStatus();

    protected:

    int m_life;
    std::string m_name;
};




#endif /* HUMAN_H_ */
