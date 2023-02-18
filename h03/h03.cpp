/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h03.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
using stringIn = const string&;

string STUDENT = "dcao41"; // Add your Canvas login name
extern string ASSIGNMENT;

// Function Prototypes
void printTitle();
string getInput();
double letterToPoints(stringIn letterGrade);
void printReport(double points);

// Constants
const double INVALID_COMBINATION = -1.0;
const double INVALID_INPUT = -2.0;

/**
 * Calculates the grade points for a letter grade.
 * @return 0 for success.
 */
int run()
{
	// Don't change anything inside this function
	printTitle();
	string letterGrade = getInput();
	double points = letterToPoints(letterGrade);
	printReport(points);

    return 0;
}

// Implement your functions here
void printTitle()
{
	cout << STUDENT << "-" << ASSIGNMENT << "-" << "Grade Calculator\n";
	cout << "------------------------------\n" << endl;
	return;
}

string getInput()
{
	string letterGrade = "Enter your letter grade: ";
	cout << letterGrade;
	string result;
	getline(cin,result);
	return result;
}

double letterToPoints(stringIn letterGrade)
{
	if (letterGrade == "A")
	{
		return 4.0;
	}
	if (letterGrade == "A-")
	{
		return 4.0-0.3;
	}
	if (letterGrade == "B")
	{
		return 3.0;
	}
	if(letterGrade == "B-")
	{
		return 3.0-0.3;
	}
	if(letterGrade == "B+")
	{
		return 3.0+0.3;
	}
	if(letterGrade == "C")
	{
		return 2.0;
	}
	if(letterGrade == "C+")
	{
		return 2.0+0.3;
	}
	if(letterGrade == "C-")
	{
		return 2.0-0.3;
	}
	if(letterGrade == "D")
	{
		return 1.0;
	}
	if(letterGrade == "D-")
	{
		return 1.0-0.3;
	}
	if(letterGrade == "D+")
	{
		return 1.0+0.3;
	}
	if(letterGrade == "F")
	{
		return 0.0;
	}
	if(letterGrade == "A+" || letterGrade=="F+" || letterGrade=="F-")
	{
	return INVALID_COMBINATION;
	}
	else
	{
	return INVALID_INPUT;
	}
}

void printReport(double points)
{
	cout << fixed << setprecision(1);
	cout << "Grade value is [";
	if (points >= 0.0)
	{
		cout << points;
	}
	else
	{
		if (points == INVALID_COMBINATION)
		{
			cout << "Invalid combination";
		}
	
		else 
	
		if (points == INVALID_INPUT)
		{
		cout << "Invalid input";
		}
	}
	cout << "]\n";
}