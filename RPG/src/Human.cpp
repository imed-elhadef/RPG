
#include "Human.h"


using namespace std;


Human::Human() : m_life(200),m_name("AbdAllah")
{

}

Human::Human(string name) : m_life(200),m_name(name)
{

}

Human::~Human()
{

}

bool Human::isAlave()
{
    if (m_life > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Human::displayStatus()
{
    cout << "Life : " << m_life << endl;
}
