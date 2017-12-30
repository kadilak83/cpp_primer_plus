// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};        // pounds per stone
        int stone;                      // whole stones
        double pds_left;                // fractional pounds
        double pounds;                  // entire weight in pounds
    public:
        Stonewt(double lbs);            // constructor for double pounds
        Stonewt(int stn, double lbs);   // constructor for stone, lbs
        Stonewt();                      // default constructor
        ~Stonewt();

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
#endif
