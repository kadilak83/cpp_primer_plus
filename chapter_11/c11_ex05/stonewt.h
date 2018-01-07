// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

namespace STONEWT {

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};        // pounds per stone
        int stone = 0;                      // whole stones
        double pds_left = 0;                // fractional pounds
        double pounds = 0;                  // entire weight in pounds
    public:
        explicit Stonewt(double lbs);            // constructor for double pounds
        Stonewt(int stn, double lbs);   // constructor for stone, lbs
        Stonewt() = default;                      // default constructor
        ~Stonewt() = default;

        // operator overloading
        bool operator==(const Stonewt &st) const {return pounds == st.pounds;}
        bool operator!=(const Stonewt &st) const {return pounds != st.pounds;}
        bool operator<(const Stonewt &st) const {return pounds < st.pounds;}
        bool operator<=(const Stonewt &st) const {return pounds <= st.pounds;}
        bool operator>(const Stonewt &st) const {return pounds > st.pounds;}
        bool operator>=(const Stonewt &st) const {return pounds >= st.pounds;}

        Stonewt operator+(const Stonewt & b) const;
        Stonewt operator-(const Stonewt & b) const;
        Stonewt operator*(double n) const;

        // friends
        friend Stonewt operator*(double n, const Stonewt & a);
        friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};
}
#endif
