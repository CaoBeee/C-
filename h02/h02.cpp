/**
 *  @author Brian Cao
 *  @date Sprint 2022
 *  @file h02.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "dcao41";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * Calculates the amount of artificial sweetener needed to kill a mouse using weight.
 * @return 0 for success.
 */
int run()
{
// Add your implementation comments here
    // 1. A lethal Dose
        // A government research lab has concluded that an artificial sweetener 
        // commonly used in diet soda will cause death in laboratory mice. 
        // A friend of yours is desperate to lose weight but cannot give up soda. 
        // Your friend wants to know how much diet soda it is possible to drink without dying as a result. 
        // Write a program to supply the answer.
        
         // Write your code here
    // 2. Input Section: prompt and input on same line
    double mouseGrams;
    cout << "Weight of the mouse in grams: \n";
    cin >> mouseGrams;
    
    double mouseDose;
    cout << "Lethal dose for the mouse (in grams): \n";
    cin >> mouseDose;
    
    double dieterLb;
    cout << "Desired weight of the dieter (in pounds): \n";
    cin >> dieterLb;
    
    
    
    // 3. Processing section - compute the results
        // - blank line
    const double dietSodaPercent = 0.001; 
    const double canSodaWeightGrams = 350;
    const double poundToGrams = 454;
    const double dieterGrams = dieterLb * poundToGrams;
    
    cout << fixed << setprecision(0);
    double lethalDoseGrams = (mouseDose / mouseGrams) * dieterGrams;
    double lethalDoseCans = lethalDoseGrams / canSodaWeightGrams / dietSodaPercent;
    
    // 4. Output section: test data inside brackets [ ]
    
    cout << "Lethal dose in grams, cans is [" << lethalDoseGrams << ", " << lethalDoseCans << "]" << endl;
   

    return 0;
}
