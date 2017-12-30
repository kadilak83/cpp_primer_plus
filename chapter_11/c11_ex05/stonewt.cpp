#include <iostream>
#include "stonewt.h"


Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt()      // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

// operator overloading

// add two Vectors
Stonewt Stonewt::operator+(const Stonewt & b) const
{
    return Stonewt(pounds + b.pounds);
}

// subtract Vector b from a
Stonewt Stonewt::operator-(const Stonewt & b) const
{
    return Stonewt(pounds - b.pounds);
}

// multiply vector by n
Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(n * pounds);
}

// friend methods
// multiply n by Vector a
Stonewt operator*(double n, const Stonewt & a)
{
    return a * n;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
    os << "Weight in stones: " << st.stone << " stone, " << st.pds_left << " pounds" << std::endl;
    os << "Weight in punds: " << st.pounds << " pounds" << std::endl;
    return os;
}

