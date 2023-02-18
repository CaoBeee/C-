/**
 *  @file h31.cpp
 *  @author Brian Cao
 *  @version Put the semester and meeting time here
 */
#include <string>
#include <stdexcept>
#include <sstream>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h31.h"

// Implement your class members here
Fraction::Fraction(int n)
{
   m_numerator = n;
   m_denominator = 1;
}

int Fraction::gcd(int n, int d)
{
   n = abs(n);
   d = abs(d);
   int result = 1;
   for (int i = 2; i <= (n * d); i++)
   {
       if (n % i == 0 && d % i == 0)
       {
           result = i;
       }
   }
   return result;
}

Fraction::Fraction(int n, int d)
{
   if (d == 0)
       throw std::invalid_argument("denominator cannot be zero...");
   if (n == 0)
   {
       m_numerator = 0;
       m_denominator = 1;
   }
   else
   {
       int g = gcd(n, d);
       m_numerator = n / g;
       m_denominator = d / g;
       if (d < 0)
       {
           m_numerator = m_numerator * -1;
           m_denominator = m_denominator * -1;
       }
   }

}

Fraction& Fraction::operator+=(const Fraction& rhs)
{
   int a = m_numerator;
   int b = m_denominator;
   int c = rhs.m_numerator;
   int d = rhs.m_denominator;
   *this = Fraction(a * d + b * c, b * d);
   return *this;
}
Fraction& Fraction::operator-=(const Fraction& rhs)
{
   int a = m_numerator;
   int b = m_denominator;
   int c = rhs.m_numerator;
   int d = rhs.m_denominator;
   *this = Fraction(a * d - b * c, b * d);
   return *this;
}
Fraction& Fraction::operator*=(const Fraction& rhs)
{
   int a = m_numerator;
   int b = m_denominator;
   int c = rhs.m_numerator;
   int d = rhs.m_denominator;
   *this = Fraction(a * c, b * d);
   return *this;
}
Fraction& Fraction::operator/=(const Fraction& rhs)
{
   int a = m_numerator;
   int b = m_denominator;
   int c = rhs.m_numerator;
   int d = rhs.m_denominator;
   *this = Fraction(a * d , b * c);
   return *this;
}

std::string Fraction::toString()const
{
   std::ostringstream out;
   out << m_numerator;
   if (m_denominator != 1)
       out << "/" << m_denominator;
   return out.str();
}

std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
   out << f.toString();
   return out;
}

const Fraction operator+(const Fraction& lhs, const Fraction& rhs)
{
   Fraction result(lhs);
   return result += rhs;
}
const Fraction operator-(const Fraction& lhs, const Fraction& rhs) {
   Fraction result(lhs);
   return result -= rhs;
}
const Fraction operator*(const Fraction& lhs, const Fraction& rhs)
{
   Fraction result(lhs);
   return result *= rhs;
}
const Fraction operator/(const Fraction& lhs, const Fraction& rhs)
{
   Fraction result(lhs);
   return result /= rhs;
}


/////////////// STUDENT TESTING ////////////////////

int run()
{
    cout << "Uncomment these and use make run to test." << endl;
    // Fraction a(3, 6); // 1/2 after reducing
    // Fraction b(1, 3); // 1/3
    // Fraction c(1, 6); // 1/6

    // Fraction sum = a + b + c;

    // cout << a << " + " << b << " + " << c
    //     << " = " << sum << endl;

    return 0;
}

