#ifndef COMPLEX0_H
#define COMPLEX0_H

#include <iostream>

namespace COMPLEX0 {

    class Complex
    {
    private:
        double real;
        double imag;
    public:
        Complex();
        Complex(double r, double i);

        //operators
        Complex operator+(const Complex & c) const;
        Complex operator-(const Complex & c) const;
        Complex operator*(const Complex & c) const;
        Complex operator*(double n) const;
        Complex operator~() const;

        // friends
        friend Complex operator*(double n, const Complex & a);
        friend std::ostream & operator<<(std::ostream & os, const Complex & c);
        friend std::istream & operator>>(std::istream & in, Complex & c);
    };
}
#endif // COMPLEX0_H
