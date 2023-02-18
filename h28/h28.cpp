/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h28.cpp
 */
#include <string>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h28.h"

// Implement your class here
Bug::Bug(int startPos)
{
        m_position = startPos;
        m_direction = 1;
}

//move method to move the bug
void Bug::move()
{
        m_position += m_direction;
}
//method to turn the direction of the bug
void Bug::turn()
{
        m_direction = m_direction * -1;
}

int Bug::position() const
{
        return m_position;
}

////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
int run()
{
    cout << "Add your own tests here" << endl;
    // Bug fred(3);
    // fred.move();
    // cout << "fred is now at " << fred.position() << endl;

    return 0;
}