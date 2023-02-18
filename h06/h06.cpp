/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h06.cpp
 */
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "dcao41";  // Add your Canvas login name

// Add your function here
int sumNums(const string& str)
{
	int sum{0};
	int num{0};
	for (size_t i{0}, len{str.size()}; i < len; ++i)
		{
		//process the characters here
		if (isdigit(str.at(i)))
			{
				num *= 10;
				num += str[i] - '0';
			}
		else
			{
				sum += num;
				num = 0;
			}
		}
	sum += num;
	return sum;
}


/////////////// Optional Student Code /////////////////
#include <iostream>
int run()
{
	// Add any code you like here
	cout << R"(sumNums("abc123xyz")->123? )" << sumNums("abc123xyz") << endl;
	cout << R"(sumNums("aa11b33")->44? )" << sumNums("aa11b33") << endl;
	cout << R"(sumNums("7 11")->18? )" << sumNums("7 11") << endl;
	cout << R"(sumNums("rj4xubf2"))" << sumNums("rj4xubf2") << endl;
    return 0;
}


