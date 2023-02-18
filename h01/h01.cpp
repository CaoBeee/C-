/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "dcao41";  // Add your Canvas login name
extern string ASSIGNMENT;


/**
 * Addition and subtraction of time.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here
    // 1. Title and introduction
        // - blank line
    // 2. Input Section: prompt and input on same line
    int timeHours, timeMinutes;
    char discard;
    cout    << "   Time: " << endl;
    cin     >> timeHours >> discard >> timeMinutes;
    
    int durationHours, durationMinutes;
    cout    << "Duration: ";
    cin     >> durationHours >> discard >> durationMinutes;
    
    // 3. Processing section - compute the results
        // - blank line
    int time            = timeHours * 60 + timeMinutes;
    int duration        = durationHours * 60 + durationMinutes;
    int after           = time + duration;
    int before          = 4320 + time - duration;
    int afterHours      = after / 60 % 12;
    afterHours = (afterHours + 11) % 12 + 1;
    int afterMinutes    = after % 60;
    int beforeHours     = before / 60 % 12;
    beforeHours = (beforeHours + 11) % 12 + 1;
    int beforeMinutes   = (4320 + before) % 60;
    
    // 4. Output section: test data inside brackets [ ]
    cout << setfill('0'); //only needed once
    cout << "Give me a time (such as 3:57) and a duration (such as 1:05), and I'll tell you the sum (that is, the time that follows the given time by the given duration), and difference (the time that precedes the given time by hat duration)." << endl;
    cout << " " << endl;
    cout << "       Time: " << timeHours << ":" << timeMinutes << endl;
    cout << "       Duration: " << durationHours << ":" << durationMinutes << endl;
    cout << endl;
    
    cout << durationHours << ":" << setw(2) << durationMinutes 
        << " hours after, and before, " 
        << timeHours << ":" << setw(2) << timeMinutes 
        << " is [" << afterHours << ":" << setw(2) << afterMinutes << ", "
        << beforeHours <<":" << setw(2) << beforeMinutes << "]" << endl;
    
    return 0;
}
