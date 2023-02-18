/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h04.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "dcao41";  // Add your Canvas login name
extern string ASSIGNMENT;

// Add your function declaration here
string getStatus(double gpa, int credits, int honorCredits);

/**
 * Describe the purpose of your program here.
 * Returns graduation status based on gpa,credits, and honorCredits inputs
 * @return 0 for success.
 */
int run()
{
	// DON'T CHANGE ANYTHING IN THIS FUNCTION
    cout << STUDENT << "-" << ASSIGNMENT << "-Graduation Calculator" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "Enter gpa, total credits and honors credits: ";
	double gpa;
	int credits, honorsCredits;
	cin >> gpa >> credits >> honorsCredits;

	// You will write this function
	string result = getStatus(gpa, credits, honorsCredits);

	cout << "Result is [\"" << result << "\"]" << endl;

    return 0;
}

// Implement your function here
string getStatus(double gpa, int credits, int honorsCredits)
{
	if (credits < 180 || gpa < 2)
	{
			return "not graduating";
	}
	else if (credits >= 180 && gpa >= 2 && gpa < 3.6)
	{
		return "graduating";
	}
	
	else if (honorsCredits < 15 && gpa >= 3.6 && gpa < 3.8)
	{
			return "cum laude";
	}		
	else if (honorsCredits < 15 && gpa >= 3.8)
	{
			return "magna cum laude";
	}
	
	else if (honorsCredits >= 15 && gpa >= 3.6 && gpa < 3.8)
	{
			return "magna cum laude";
	}		
	else if (honorsCredits >= 15 && gpa >= 3.8)
	{
			return "summa cum laude";
	}
	return "not graduating";
	
}