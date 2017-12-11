#ifndef BETELGEUSEAN_HXX
#define BETELGEUSEAN_HXX

class Plorg
{
private:
    static const int LIMIT = 20;
    char name[LIMIT];
    int ci;
public:
    explicit Plorg(const char *_name = "Plorga");
    void setCI(int _ci);
    void report() const;
};

#endif // BETELGEUSEAN_HXX

