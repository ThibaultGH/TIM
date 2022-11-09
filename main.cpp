// Some includes from the Standard C++ library
#include <iostream>

// Other includes
#include "TIM.hpp"

using namespace std;

int main(int argc, char *argv[])
{

  float* vec1 = (float *) malloc(sizeof(float)*2);
  vec1[0] = 1;
  vec1[1] = 0;

  float* vec2 = (float *) malloc(sizeof(float)*2);
  vec2[1] = 1;
  vec2[0] = 0;

  cout << ComputeAreaElement(vec1,vec2) << "\n";
  
  return 0;
}
