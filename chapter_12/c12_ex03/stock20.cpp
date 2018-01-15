#include <iostream>
#include <cstring>
#include "stock20.h"

namespace STOCK20 {

Stock::Stock()
{
    company = std::unique_ptr<char[]>(new char[1]);
    company.get()[0] = '\0';
}

Stock::Stock(const char * co, long n, double pr): share_val(pr)
{
    company =  std::unique_ptr<char[]>(new char[std::strlen(co) + 1]);
    std::strcpy(company.get(), co);

    if (n < 0)
    {
        std::cout << "Number of shares can’t be negative; "
                  << company.get() << " shares set to 0.\n";
        shares = 0;
    }
    else
    {
        shares = n;
    }
    set_tot();
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can’t be negative. "
                    << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can’t be negative. "
        << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can’t sell more than you have! "
        << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
        else
        return *this;
}

std::ostream & operator<<(std::ostream & os, const Stock & s)
{
    using std::endl;
    using std::ios_base;
    // set format to #.###
    ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = os.precision(3);

    os << "Company: " << s.company.get() << " Shares: " << s.shares << endl;
    os << " Share Price: $" << s.share_val;

    // set format to #.##
    os.precision(2);
    os << " Total Worth: $" << s.total_val << endl;

    // restore original format
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}

}
