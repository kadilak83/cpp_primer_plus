#include "complex0.h"

namespace COMPLEX0 {

    Complex::Complex():real(0.0), imag(0.0)
    {
    }

    Complex::Complex(double r, double i):real(r), imag(i)
    {
    }

    // operator overloading
    Complex Complex::operator+(const Complex & c) const
    {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex Complex::operator-(const Complex & c) const
    {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex Complex::operator*(const Complex & c) const
    {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real );
    }

    Complex Complex::operator*(double n) const
    {
        return Complex(real * n, imag * n);
    }

    Complex Complex::operator~() const
    {
        return Complex(real, -imag);
    }

    // friend methods
    Complex operator*(double n, const Complex & a)
    {
        return a * n;
    }

    std::ostream & operator<<(std::ostream & os, const Complex & c)
    {
        os << "(" << c.real << ", " << c.imag << "i)";
        return os;
    }

    std::istream & operator>>(std::istream & in, Complex & c)
    {
        in >> c.real >> c.imag;
        return in;
    }
}
