/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h12.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

// Write your function here

void strip()
{
    int inScmt = 0,
    inMcmt = 0,
    inStr = 0;
    char ch;
    while(cin.get(ch) && ch != EOF)
    {
        if (inScmt && ch == '\n')
        {
            inScmt = 0;
        }
        else if (inStr && ch == '"')
        {
            inStr = 0;
        }

        else if (inMcmt && ch == '*' && cin.peek() == '/')
        {
            inMcmt = 0;
            cin.get(ch);
            cin.get(ch);
        }
        else if (!inStr && !inScmt && !inMcmt)
        {
            if (ch == '"')
            {
                inStr = 1;
            }
            else if (ch == '/' && cin.peek() == '*' && !inMcmt)
            {
                inMcmt = 1;
            }
            else if (ch == '/' && cin.peek() == '/')
            {
                inScmt = 1;
            }
        }
        else if(inStr && ch == '\\' && cin.peek() == '"')
        {
            cout.put(ch);
            cin.get(ch);
        }
        if (cin && !inScmt && !inMcmt)
        {
            cout.put(ch);
        }
    }
}

/*
int inScmt = 0,
    inMcmt = 0,
    inStr = 0;
    char ch;
    while(cin.get(ch) && ch != EOF)
    {
        if(inScmt && ch == '\n')
        {
            inScmt = 0;
        }
        else if (inStr && ch == '"')
        {
            inStr = 0;
        }
        else if (inMcmt && ch == '*' && cin.peek() == '/')
        {
            inMcmt = 0;
        }
        else if (inStr && ch == '\\' && cin.peek() == '"')
        {
            cout.put(ch);
            cin.get(ch);
        }
        else if (!inScmt && !inMcmt && !inStr)
        {
            if(ch == '"')
            {
                inStr = 1;
            }
            else if (ch == '/' && cin.peek() == '*')
            {
                inMcmt = 1;
            }
            else if (ch == '/' && cin.peek() == '/')
            {
                inScmt = 1;
            }
        }
        if(ch && !inScmt && !inMcmt )
        {
            if (ch != '*' && cin.peek() != '/')
            {
                cout.put(ch);
            }
        }
    }
    */
//////////////// STUDENT TESTING ////////////////////
int run()
{
    //cout << "Student testing" << endl;
    strip();
    return 0;
}