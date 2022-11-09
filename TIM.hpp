#ifndef TIM_HPP
#define TIM_HPP

// Some includes from the Standard C++ library
#include <string>
#include <set>

using namespace std;

class QuadTri{
  
private:
  float *m_Nodes;
  float *m_Weights;

public:

  QuadTri();
  QuadTri(const float *TriangleCoord);
  
};

// Functions that computes the area of an element given its Nodes indexes
float ComputeAreaElement(const float* vec1, const float* vec2);

#endif
