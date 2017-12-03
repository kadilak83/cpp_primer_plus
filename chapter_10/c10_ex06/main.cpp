// Create member function definitions and a program that exercises the class.
#include <iostream>
#include <cstdlib>

class Move
{
  private:
    double x;
    double y;
  public:
    Move(double a = 0, double b = 0);
    void showMove() const;
    Move add(const Move & m) const;
    void reset(double a = 0, double b = 0);
};

Move::Move(double a, double b)
{
  x = a;
  y = b;
}

void Move::showMove() const
{
  std::cout << "X: " << x << ", Y: " << y << std::endl;
}

Move Move::add(const Move &m) const
{
  return Move(x + m.x, y + m.y);
}

void Move::reset(double a, double b)
{
  x = a;
  y = b;
}

int main()
{
  Move m1 = Move(2.0, 3.0);
  Move m2 = Move(7.0, 10.4);
  m1.showMove();
  m2.showMove();
  Move m3 = m1.add(m2);
  m3.showMove();
  m2.reset(34.5);
  m2.showMove();
  m3 = m3.add(m2);
  m3.showMove();

  return EXIT_SUCCESS;
}
