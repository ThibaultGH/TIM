// Some includes from the Standard C++ library
#include <iostream>

// Other includes
#include "TIM.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  cout << "Hello world !" << "\n";

  int my_int =2;
  
  cout << integrate(my_int) << endl;
  
  return 0;
}
