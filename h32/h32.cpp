/**
 *  @author Brian Cao
 *  @date Spring 2022
 *  @file h32.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID


#include "h32.h"

// Add your code here
void Image::translate(int dx, int dy)
{
        Image& img = *this;
        if (dx < 0) 
        {
                dx = width() - abs(dx) % width();
        }
        else
        {
                dx = dx % width();
        }

        for (unsigned row = 0; row < height(); ++row)
        {
                for (int i = 0; i < dx; i++)
                {
                        int last = width() - 1;
                        int r_id = row * width();
                        auto temp = img[r_id + last];
                        for (int j = last; j > 0; --j)
                        {
                                img[r_id + j] = img[r_id + (j - 1)];
                        }
                        img[r_id + 0] = temp;
                }
        }
        if (dy < 0)
        {
                dy = height() - abs(dy) % height();
        }
        else 
        {
                dy = dy % height();
        }
        int lastRow = width() * (height() - 1);
        for (int i = 0; i < dy; i++)
        {
                for (unsigned col = 0; col < width(); ++col)
                {
                        auto temp = img[lastRow + col];
                        for (unsigned row = height() - 1; row > 0; --row)
                        {
                                img[row * width() + col] = img[(row - 1) * width() + col];
                        }
                        img[col] = temp;
                }
        }
}

const Pixel& Image::operator[](unsigned idx) const
{
        return m_pixels.at(idx);
}

Pixel& Image::operator[](unsigned idx)
{
        return m_pixels.at(idx);
}



/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}