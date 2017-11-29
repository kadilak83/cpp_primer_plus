#ifndef SALES_HXX
#define SALES_HXX
namespace SALES
{
    class Sales
    {
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales(const double ar[], int n);
        static Sales setSales();
        void showSales() const;
    };
}
#endif // SALES_HXX

