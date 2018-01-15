#ifndef STOCK20_H_
#define STOCK20_H_

#include <string>
#include <memory>

namespace STOCK20 {

using namespace std;

class Stock
{
private:
    std::unique_ptr<char[]> company;
    int shares = 0;
    double share_val = 0.0;
    double total_val = 0.0;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();
    explicit Stock(const char *co, long n = 0, double pr = 0.0);
//    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    const Stock & topval(const Stock & s) const;

    friend std::ostream & operator<<(std::ostream & os, const Stock & s);
};
}
#endif
