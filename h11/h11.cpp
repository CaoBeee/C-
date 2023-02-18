/**
    @file h11.cpp
    @author Brian Cao
    @version Spring 2022
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h11.h"

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

// Add your function implementations here
bool find(const std::string& s, const std::string& t)
{
    if (s.size() < t.length())
    {
        return false;
    }
    else if(s.substr(0, t.size()) == t)
    {
        return true;
    }
    return find(s.substr(1), t);
}
string stringClean(const string& str)
{
    if (str.size() <= 1)
    {
        return str;
    }
    else
    {
        if (str[0] == str[1])
        {
            return stringClean(str.substr(1));
        }
        else
        {
            return str[0] + stringClean(str.substr(1));
        }
    }
}

////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

