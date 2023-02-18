/**
    @file h34.cpp
    @author Brian Cao
    @version Spring 2022
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
using namespace std;

#include "h34.h"

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

// Add your implementation here
Worker::Worker(const string& name,double rate)
{
    this->name = name;
    this->rate = rate;
}
double Worker::getRate() const
{
    return rate;
}
string Worker::getName() const
{
    return name;
}

// Implementation of payment for salaried worker
SalariedWorker::SalariedWorker(const string& name, double rate) : Worker(name, rate)
{
    
}
string SalariedWorker::payInfo(int hours) const
{
    ostringstream out;
    double pay = 0.0;
    if(hours <= 40)
    {
        pay = 40 * getRate();
    }
    else
    {
        pay = 40 * getRate();
    }
    out << fixed << setprecision(2);
    out << getName() << "(Salaried, $ " << rate << ") worked " << hours << " hours. Pay: $ " << pay;
    return out.str();
}

// Implementation of payment for hourly worker
HourlyWorker::HourlyWorker(const string& name, double rate) : Worker(name, rate)
{
    
}
string HourlyWorker::payInfo(int hours) const
{
    ostringstream out;
    double pay = 0.0;
    if(hours <= 40)
    {
        pay = hours * getRate();
    }
    else
    {
        pay = (40 * getRate()) + ((hours - 40)* getRate() * 1.5);
    }
    out << fixed << setprecision(2);
    out << getName() << "(Hourly, $ " << rate << ") worked " << hours << " hours. Pay: $ " << pay;
    return out.str();
}

/////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
	cout << "Student testing" << endl;
	return 0;
}
