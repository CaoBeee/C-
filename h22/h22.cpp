/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h22.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h22.h"

// Add your code here
void flip(UC* const img, int width, int height, Direction dir)
{
    if (dir == Direction::LtoR || dir == Direction::RtoL)
    {
        for (int row = 0; row <= height - 1; row++)
        {
            Pixel * front;
            front = reinterpret_cast<Pixel *> (img) + row * width;
            auto back = front + width -1;
            while (front < back)
            {
                auto temp = *front;
                *front = *back;
                *back = temp;
                front++;
                back--;
            }
        }
    }
    else if (dir == Direction::TtoB || dir == Direction::BtoT)
    {
        for (int col = 0; col <= width - 1; col++)
        {
            Pixel * top;
            top = reinterpret_cast<Pixel *>(img) + col;
            auto bottom = top + width * (height - 1);
            while (top < bottom)
            {
                auto temp = *top;
                *top = *bottom;
                *bottom = temp;
                top += width;
                bottom -= width;
            }
        }
    }
}

void mirror(UC* const img, int width, int height, Direction dir)
{
    if (dir == Direction::LtoR || dir == Direction::RtoL)
    {
        for (int row = 0; row <= height - 1; row++)
        {
            Pixel * front;
            front = reinterpret_cast<Pixel *> (img) + row * width;
            auto back = front + width -1;

            while (front < back)
            {
                if (dir == Direction::LtoR)
                {
                    *back = *front;
                }
                else if (dir == Direction::RtoL)
                {
                    *front = *back;
                }
                front++;
                back--;
            }
        }
    }
    else if (dir == Direction::TtoB || dir == Direction::BtoT)
    {
        for (int col = 0; col <= width - 1; col++)
        {
            Pixel * top;
            top = reinterpret_cast<Pixel *>(img) + col;
            auto bottom = top + width * (height - 1);

            while (top < bottom)
            {
                if (dir == Direction::TtoB)
                {
                    *bottom = *top;
                }
                else if (dir == Direction::BtoT)
                {
                    *top = *bottom;
                }
                top += width;
                bottom -= width;
            }
        }
    }
}



/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}