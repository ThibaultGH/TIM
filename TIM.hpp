#ifndef TIM_HPP
#define TIM_HPP

// Some includes from the Standard C++ library
#include <string>
#include <set>

using namespace std;

class QuadTri{
  
private:

  // float* m_RefTriangle;
  float *m_Nodes;
  float *m_Weights;
  float m_AreaTriangle;
  // float *m_MatrixToRefTriangle;

public:

  // Constructors
  QuadTri();
  QuadTri(const float *TriangleCoord);

  //Gets
  float* Nodes() const;
  float* Weights() const;
  float Nodes(const int i0, const int i1) const;
  float Weights(const int i0) const;

  float ComputeIntegral();
  
};

// Functions that computes the area of an element given its Nodes indexes
float ComputeAreaElement(const float* vec1, const float* vec2);

#endif
