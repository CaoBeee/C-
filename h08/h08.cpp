/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h09.cpp
 */
#include <string>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h08.h"

// Put your function implementation (definitions) in this file
string barCode(int zip)
{
    string str = to_string(zip);
    string barCode = "|";
    for (size_t i = 0; i < str.size(); ++i)
    {
        barCode = barCode + codeForDigit(str[i] - '0');
    }
    int check = checkDigit(zip);
    barCode = barCode + codeForDigit(check) + "|";
    return barCode;
}
string codeForDigit(int digit)
{
    switch(digit)
    {
        case 1: return ":::||";
        case 2: return "::|:|";
        case 3: return "::||:";
        case 4: return ":|::|";
        case 5: return ":|:|:";
        case 6: return ":||::";
        case 7: return "|:::|";
        case 8: return "|::|:";
        case 9: return "|:|::";
        case 0: return "||:::";
    }
    return "";
}
int checkDigit(int zip)
{
    int sum = 0;
    string str = to_string(zip);
    for(size_t i = 0; i < str.size(); i++)
    {
        sum = sum + (str[i] - '0');
    }
    if (sum % 10 == 0)
    return 0;
    return 10 - sum % 10;
}


/////////// Student Testing ///////////////////////
#include <iostream>
int run()
{
    // You can add code that "runs" here
    return 0;
}