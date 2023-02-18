/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h07.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h07.h"

// Place your function definitions in this file.
string zipZap(const string& str)
{
    size_t len = str.size();
    string result;
    size_t i = 0;
    if (len < 3)
    {
        return str;
    }
    while ( i < str.size() - 2)
    {
        string a = str.substr(i, 3);
        if (a.at(0) == 'z' && a.at(2) == 'p')
        {
            result += "zp";
            i += 3;
        }
        else
        {
            result += str.substr(i,1);
            i++;
        }
    }
    if (str[len - 1] != 'p' || str[len - 3] != 'z')
    {
        result += str[len - 3];
        result += str[len - 2];
    }
    return result;
}
int countCode(const string& str)
{
    int result = 0;
    if (str.size() > 3)
    {
        for (size_t i = 0, len = str.size(); i < len - 3; ++i)
        {
            string word = str.substr(i, 4);
            string front = word.substr(0, 2);
            string back = word.substr(3);
            if (front == "co" && back == "e")
            {
                result++;
            }
        }
    }
    return result;
}
string everyNth(const string& str, int n)
{
    string result = "";
    int len = str.size();
    for (int i = 0; i < len; i += n)
    {
        result = result + str.at(i);
    }
    return result;
}
bool prefixAgain(const string& str, int n)
{
    bool result;
    return str.substr(1).find(str.substr(0, n)) != string::npos;
}
////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    return 0;
}