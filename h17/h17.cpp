/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h17.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID


#include "h17.h"

// Implement the function here
vector<string> fileToWords(const string& fileName)
{
    vector<string> result;
    ifstream file;
    string word;

    try
    {
        file.open(fileName);
        if (!file)
        {
            throw invalid_argument("filename is invalid");
        }
        while (getline(file, word))
        {
            result.push_back(word);
        }
    }
    catch (string& e)
    {
        cout << e << endl;
    }
    return result;
}
    

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // auto v = fileToWords("excluded.txt");
    // cout << "Excluded words:" << endl;
    // for (auto e : v) cout << " -" << e << endl;
    return 0;
}