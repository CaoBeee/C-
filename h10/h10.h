#ifndef H10_H_
#define H10_H_
/**
    @file h10.h
    @author Brian Cao
    @version
*/
#include <string>

// Place your prototypes here
bool read(const std::string& agePrompt, int& age, bool check);
bool read(const std::string& gpaPrompt, double& gpa, bool check);
bool read(const std::string& namePrompt, string& name, bool check);
bool read(char& ch, char dot);

#endif
