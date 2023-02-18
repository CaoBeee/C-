/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h25.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h25.h"

// Add your code here
void reverse(char *s)
{
    int length, i;
    char *bp, *ep, ch;
    bp = s;
    ep = s;
    length = 0;
    while (*s != '\0')
    {
        length++;
        s++;
    }
    //Taking ep to end
    for (i = 0; i < length - 1; i++)
        ep++;
    for (i = 0; i < length / 2; i++)
    {
        ch = *ep;
        *ep = *bp;
        *bp = ch;
        bp++;
        ep--;
    }
}

const char *findStr(const char *s1, const char *s2)
{
  while (*s1 != '\0')
  {
    if (*s1 == *s2 || *s1 != '\0')
    {
      const char *temp1 = s1;
      const char *temp2 = s2;
      while (true)
      {
        if (*temp2 == '\0')
        {
          return s1;
        }
        else if (*temp1 != *temp2)
        {
          break;
        }
        temp1++;
        temp2++;
        }
        s1++;
    }
  }
    return NULL;
}

//////////////////////// STUDENT TESTING //////////////////////////

int run()
{
    cout << "Add your own tests here" << endl;
    return 0;
}