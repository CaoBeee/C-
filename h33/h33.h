/*
 *  h33.h
 *  @author Brian Cao
 *  @version Spring 2022
 *  Point->Circle->Cylinder
 */

#ifndef H33_H_
#define H33_H_

#include "point.h"
#include <cmath>
#include <string>

// Use this for PI
const double PI = std::acos(-1.0);

//////// Put your class definitions here /////////////////////
// Put Circle first, then Cylinder
class Circle: public Point
{
    public:
        double getRadius() const;
        double getCircumference() const;
        virtual double getArea() const;
        virtual string toString(int decimals = 2) const; 
        Circle(double x, double y, double r );
    private:
        double radius;
};

class Cylinder: public Circle
{
    public:
        double getHeight() const;
        double getVolume() const;
        virtual double getArea() const ;
        Cylinder(double h, double r,double x,double y);
        virtual string toString(int decimals=2) const;
    private:
        double height;
};
#endif
