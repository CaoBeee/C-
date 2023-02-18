/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h09.cpp
 */
#include <string>
#include "h09.h"
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h09.h"

// Put your function implementation (definitions) in this file
string digit(int n, const string& symbols)
{
    string one = symbols.substr(0, 1),five = symbols.substr(1, 1), ten = symbols.substr(2, 1);
    switch (n)
    {
        case 9:
            return one + ten;
        case 8:
            return five + one + one + one;
        case 7:
            return five + one + one;
        case 6:
            return five + one;
        case 5:
            return five;
        case 4:
            return one + five;
        case 3:
            return one + one + one;
        case 2:
            return one + one;
        case 1:
            return one;
        case 0:
            return "";
    }
    return 0;
}
string toRoman(int n)
{
    if(n <= 0 || n > 3999)
       return "OUT OF RANGE";
   string result = "";
   result = ones(n % 10);
   n = n / 10;
   result = tens(n % 10) + result;
   n = n / 10;
   result = hundreds(n % 10) + result;
   n = n / 10;
   for(int i = 0; i < n; ++i)
   {
       result = "M" + result;
   }
   return result;
}

/////////// Student Testing ///////////////////////
int run()
{
    return 0;
}