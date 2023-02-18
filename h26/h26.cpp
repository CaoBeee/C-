/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h26.cpp
 */
#include <string>
#include <iostream>
#include <memory>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h26.h"
// Add your code here
FlexArray& readData(std::istream& in, FlexArray& a)
{
    a.size_ = 0;
    size_t capacity = INITIAL_CAPACITY;
    a.data_.reset(new int[capacity]);

    int num;
    while (in >> num)
    {
        if (a.size_ >= capacity)
        {
        capacity *= 2;
        unique_ptr<int[]> tmp{new int[capacity]};
        for (size_t i = 0; i < a.size_; ++i)
        {
            tmp[i] = a.data_[i];
        }
        a.data_.reset(tmp.release());
        }
        a.data_[a.size_] = num;
        a.size_++;
    }

    unique_ptr<int[]> tmp{new int[a.size_]};
    for (size_t i = 0; i < a.size_; ++i)
    {
        tmp[i] = a.data_[i];
    }
    a.data_.reset(tmp.release());
    return a;
}

string toString(const FlexArray& a)
{
    string result = "{";
    if (a.size_ > 0)
    {
        result += to_string(a.data_[0]);
        for (size_t i = 1; i < a.size_; ++i)
        {
            result += ", " + to_string(a.data_[i]);
        }
    }
    return result + "}";
}

//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <sstream>
int run()
{
    cout << "Add your own tests here" << endl;
    // istringstream in("8 9 Q 4 5");
    // FlexArray a;
    // in >> a;
    // cout << "a->" << a << endl;
    return 0;
}