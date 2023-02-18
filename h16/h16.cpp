/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h16.cpp
 */
#include <string>
#include <cmath>
#include "h16.h"
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

// Add your implementation here
void get(istream& in, Point& p)
{
    char comma;
    in >> p.x;
    in >> comma;
    in >> p.y;
}

void print(ostream& out, const Point& p)
{
    out << "(" << p.x << ", " << p.y << ")";
}

double distanceBetween(const Point& a, const Point& b)
{
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

Point midpoint(const Point& a, const Point& b)
{
    Point mid;
    mid.x = (a.x + b.x)/2;
    mid.y = (a.y + b.y)/2;
    return mid;
}

double perimeter(const Triangle& t)
{
    double peri = 0;
    peri += distanceBetween(t.p1, t.p2);
    peri += distanceBetween(t.p2, t.p3);
    peri += distanceBetween(t.p3, t.p1);
    return peri;
}

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    //cout << "Enter a point as (x, y): ";
    //Point p;
    //get(cin, p);
    //cout << "You entered ";
    //print(cout, p);
    //cout << endl;

    return 0;
}