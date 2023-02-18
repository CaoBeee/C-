/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h14.h"

// Define your functions here
string getLine(const string& prompt)
{
    cout << prompt;
    string result;
    getline(cin, result);

    if (!prompt.empty())
    {
        if (isspace(prompt.back()))
        {
            return result;
        }
        else
        {
            cout << " ";
        }
    }
    return result;
}

int getInt(const std::string& prompt)
{
    int result = 0;
    string line = getLine(prompt);
    while(!cin.fail())
    {
        if(! line.empty())
        {
            stringstream in(line);
            int n;
            in >> n;
            in >> ws;
            if(in.eof() && ! in.fail())
            {
                return n;
            }
        }
        else
        {
            cerr << line;
            line.clear();
        }
    line = getLine(prompt);
    }
return result;
}

double getReal(const std::string& prompt)
{
    double result = 0;
    string line = getLine(prompt);
    while(!cin.fail())
    {
        if(! line.empty())
        {
            stringstream in(line);
            double n;
            in >> n;
            in >> ws;
            if(in.eof() && ! in.fail())
            {
                return n;
            }
        }
        else
        {
            cerr << line;
            line.clear();
        }
    line = getLine(prompt);
    }
return result;
}

bool getYN(const std::string& prompt)
{
    string str;
    str = getLine(prompt);
    while (true)
    {
        if (!str.empty())
        {
            istringstream in(str);
            string st;
            in >> st;
            in >> ws;
            char ch = st.at(0);
            if (ch == 'y' || ch == 'Y')
            {
                return true;
            }
            else if (ch == 'N' || ch == 'n')
            {
                return false;
            }
            else
            {
                cerr << "ERROR: Failed!" << endl;
            }
        }
        str.clear();
        str = getLine(prompt);
    }
}



/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // do
    // {
    //     string s = getLine("Enter a string: ");
    //     cout << "s->\"" << s << "\"" << endl;

    //     int n = getInt("Enter an integer:");
    //     cout << "n->" << n << endl;

    //     double d = getReal("Enter a real number: ");
    //     cout << "d->" << d << endl;

    // } while (getYN("Try again? (Y/N)"));

    return 0;
}