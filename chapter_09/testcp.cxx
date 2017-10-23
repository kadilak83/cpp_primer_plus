#include <iostream>
#include <cstring>

int main()
{
  int limit = 5;
  char a[limit];
  char b[limit];
  char c[limit];

  std::cout << strncpy(a,"1234", limit -1) << std::endl;
  std::cout << strncpy(b,"12", limit -1) << std::endl;
  std::cout << strncpy(c,"123456789", limit -1) << std::endl;
  return 0;
}
