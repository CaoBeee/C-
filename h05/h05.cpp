/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h05.cpp
 */
#include <string>
using namespace std;

string STUDENT = "dcao41";  // Add your Canvas login name

// Write your function here
bool find(const string country)                             
{
   string vowels="AEIOU";
   string prefix;
   string first=country.substr(0,1);

  
   if(vowels.find(first)!=string::npos)
   {
       return true;
   }
   else
   {
       return false;
   }

}

string toFrenchGender(const string& country)
{
   string prefix,result;
   string islands="iles";
   string plain="Israel, Madagascar, Singapore, Sri lanka, Monaco, Cuba, Cyprus, Etatus-Unis";
   string masculine="Belize, Cambodge, Mexique, Mozambique, Costa Rica, Zimbabwe";
   int len;
   string last;
                                                      
                                                      
   last = country.substr(country.length()-2,country.length()-1);
  
   if(plain.find(country)!=string::npos)
   {
       prefix="";
   }
   else if(masculine.find(country)!=string::npos)
   {
       prefix="le ";
   }
  
   else if(country.substr(0,4) == "iles" || last=="es" || last=="is" || last=="os" || last=="as")
   {
       prefix="les ";
   }
    else if(find(country)==true)
   {
       prefix="l'";
   }
   else if(last.substr(1,1)=="e" || last.substr(1,1)=="o")
   {
       prefix="la ";
   }
   
   else
   {
       prefix="le ";
   }
  
   result = prefix + country;
   return result;
}

/////////////// Optional Student Code /////////////////
int run()
{
    // You may add any code you like
    // It will be displayed with make run

    return 0;
}
