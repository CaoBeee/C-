/**
 *  @author Brian Cao
 *  @date January 31, 2022 (Semester is OK)
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "dcao41";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here

    // Write your code here
    
    // Input
    cout << "Enter ounces per box of cereal: "; //prompt
    double ouncesPerBox;                        // store the input
    cin >> ouncesPerBox;                        // read the input
    
    // Processing section
    const double OUNCES_PER_TON = 35273.92;
    double weightInTons = ouncesPerBox / OUNCES_PER_TON;
    double boxesPerTon = 1.0 / weightInTons;
    
    // Output Section
    cout << "Weight in metric tons, boxes per ton: ["
        << weightInTons << ", " << boxesPerTon << "]" << endl;
        
    return 0;
}

