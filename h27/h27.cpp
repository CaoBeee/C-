/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h27.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "h27.h"

string STUDENT = "dcao41";  // Add your Canvas login name
extern string ASSIGNMENT;

// Implement your member functions here
istream& Time::read(istream &cin)
{
    int h = 0;
    int m = 0;
    string time;
    cin >> time;
    h = h * 10 + (time[0] - '0');
    if(time[1] != ':')
    {
        h = h * 10 + (time[1] - '0');
        m = m * 10 + (time[3] - '0');
        m = m * 10 + (time[4] - '0');
    }
    else
    {
        m = m * 10 + (time[2] - '0');
        m = m * 10 + (time[3] - '0');
    }

    if(h >= 24 || m > 60)
        cin.setstate(ios::failbit);
    else
    {
        hours = h;
        minutes = m;
    }
    return cin;
}

Time Time::sum(Time t)
{
    int minutesAfter = (minutes + t.minutes) % 60;
    int hoursAfter = (hours + t.hours) % 12;
    if(minutes + t.minutes >= 60)
    {
        hoursAfter = (hoursAfter + 1) % 12;
    }
    return Time{hoursAfter, minutesAfter};
}

Time Time::difference(Time t)
{
    int minutesBefore = (minutes - t.minutes + 60) % 60;
    int hoursBefore = (hours - t.hours + 12) % 12;
    if(minutes < t.minutes)
    {
        hoursBefore = (hoursBefore - 1 + 12) % 12;
    }
    return Time{hoursBefore, minutesBefore};
}

ostream& Time::print(ostream &cout)
{
    if(hours == 0)
    {
        hours = hours + 12;
    }
    cout << hours << ":";
    if(minutes < 10)
    {
        cout << "0";
    }
    cout << minutes;
    return cout;
}
// Predefined functions for this assignment
int run()
{
    printHeading();

    Time startTime;
    Time duration;

    // Input section
    cout << "    Time: ";
    if (! startTime.read(cin)) { return die(); }
    cout << "    Duration: ";
    if (! duration.read(cin)) { return die(); }

    // Processing section
    Time after = startTime.sum(duration);
    Time before = startTime.difference(duration);

    // Output section
    cout << endl;
    duration.print(cout) << " hours after, and before, ";
    startTime.print(cout) << " is [";
    after.print(cout) << ", ";
    before.print(cout) << "]" << endl;

    return 0;
}

void printHeading()
{
    cout << STUDENT << "-" << ASSIGNMENT << ": Time and Again" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Give me a time (such as 3:57) and a duration\n"
        << "(such as 1:05), and I'll tell you the sum\n"
        << "(that is, the time that follows the given time\n"
        << "by the given duration), and difference (the time that\n"
        << "precedes the given time by that duration)." << endl;
    cout << endl;
}

int die()
{
    cout << "[Failed Input]" << endl;
    cout.flush();
    return -1;
}
