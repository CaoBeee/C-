/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h23.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h23.h"

// Add your code here
int alternatingSum(const int a[], size_t size)
{
    int sum = 0, sign = 1;
    for(size_t i = 0; i < size; ++i)
    {
        sum += a[i] *sign;
        sign *= -1;
    }
    return sum;
}

MinMax minMax(const double *ptr, size_t size)
{
    MinMax result;
    result.min = &ptr[0];
    result.max = &ptr[0];

    if (size == 0)
    {
        result.min = nullptr;
        result.max = nullptr;
    }
    for(size_t t = 1;t < size; t++)
    {
        if(ptr[t] < *result.min)
                result.min = &ptr[t];
        if(ptr[t] > *result.max)
                result.max = &ptr[t];
    }
    return result;
}
/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}