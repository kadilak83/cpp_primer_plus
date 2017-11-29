#ifndef GOLF_HXX
#define GOLF_HXX
class Golf
{
private:
  static const int LIMIT = 40;
  char fullName[LIMIT];
  int handicap;
public:
  static Golf setGolf();
  Golf(const char * name, int hc);
  void setHandicap(int hc);
  void showGolf() const;
};


#endif // GOLF_HXX

