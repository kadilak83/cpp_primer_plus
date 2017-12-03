#ifndef GOLF_H
#define GOLF_H


class Golf
{
private:
    static const int LIMIT = 40;
    char fullname[LIMIT];
    int handicap;
public:
    static Golf setGolf();
    Golf(const char * name, int hc);
    void setHandicap(int hc);
    void showGolf() const;
};

#endif // GOLF_H

