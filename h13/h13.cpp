/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h13.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;


string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h13.h"

// Implement your function here
string dataSets(const string& filename)
{
    ifstream in;
    in.open(filename.c_str());
    if(in.fail())
    {
        return "data/notfound.txt cannot be opened.\n";
    }

    int num = 0; 
    int set = 1;
    double val;
    ostringstream out;
    
    string result = out.str();
    while(!in.eof())
    {
    in >> num;
    double sum = 0;
    int count = 0;
    while(num != 0)
    {
        in >> val;
        sum += num * val;
        count += num;
        in >> num;
    }

    if(count > 0)
    {
        if(set > 1)
        out << "\n";
        out << "data set " << to_string(set) << ": total values = " << to_string(count) << "\n" << fixed <<  "average value = " << setprecision(4) << sum/count << "\n";
    }
    set++;
}

return out.str();
}

///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}