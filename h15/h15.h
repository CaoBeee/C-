/**
    @file h15.h
    @author Your name
    @data Semester and Section
*/
#ifndef H15_H_
#define H15_H_
#include <sstream>

// Your code here
template <typename T>
string to_string(T n)
{
    ostringstream out;
    out << std::fixed << n;
    return out.str();
}

#endif

