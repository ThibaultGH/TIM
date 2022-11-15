#include <iostream>

#include "TIM.hpp"

using namespace std;

QuadTri::QuadTri(){

  // m_RefTriangle = (float *) malloc(sizeof(float)*6);
  // m_RefTriangle[0] = 0;
  // m_RefTriangle[1] = 0;
  // m_RefTriangle[2] = 1;
  // m_RefTriangle[3] = 0;
  // m_RefTriangle[4] = 0;
  // m_RefTriangle[5] = 1;

  m_Nodes = (float *) malloc(sizeof(float)*6);
  m_Nodes[0] = 0.5;
  m_Nodes[1] = 0.5;
  m_Nodes[2] = 0.5;
  m_Nodes[3] = 0;
  m_Nodes[4] = 0;
  m_Nodes[5] = 0.5;

  m_Weights = (float *) malloc(sizeof(float)*3);
  m_Weights[0] = 0.33333333;
  m_Weights[1] = 0.33333333;
  m_Weights[2] = 0.33333333;


}

QuadTri::QuadTri(const float *TriangleCoord){

  // m_RefTriangle = (float *) malloc(sizeof(float)*6);
  // m_RefTriangle[0] = 0;
  // m_RefTriangle[1] = 0;
  // m_RefTriangle[2] = 1;
  // m_RefTriangle[3] = 0;
  // m_RefTriangle[4] = 0;
  // m_RefTriangle[5] = 1;

  m_Nodes = (float *) malloc(sizeof(float)*6);
  m_Nodes[0] = 0.5;
  m_Nodes[1] = 0.5;
  m_Nodes[2] = 0.5;
  m_Nodes[3] = 0;
  m_Nodes[4] = 0;
  m_Nodes[5] = 0.5;

  m_Weights = (float *) malloc(sizeof(float)*3);
  m_Weights[0] = 0.33333333;
  m_Weights[1] = 0.33333333;
  m_Weights[2] = 0.33333333;

  float* vec1 = (float *) malloc(sizeof(float)*2);
  vec1[0] = TriangleCoord[2]-TriangleCoord[0];
  vec1[1] = TriangleCoord[3]-TriangleCoord[1];
  float* vec2 = (float *) malloc(sizeof(float)*2);
  vec2[0] = TriangleCoord[4]-TriangleCoord[0];
  vec2[1] = TriangleCoord[5]-TriangleCoord[1];
  
  m_AreaTriangle = ComputeAreaElement(vec1,vec2);

  // m_MatrixToRefTriangle = (float *) malloc(sizeof(float)*4);
  // m_MatrixToRefTriangle[0] = TriangleCoord[2]-TriangleCoord[0];
  // m_MatrixToRefTriangle[1] = TriangleCoord[3]-TriangleCoord[1];
  // m_MatrixToRefTriangle[2] = TriangleCoord[4]-TriangleCoord[0];
  // m_MatrixToRefTriangle[4] = TriangleCoord[5]-TriangleCoord[1];

}

float* QuadTri::Nodes() const {return m_Nodes;}
float* QuadTri::Weights() const {return m_Weights;}
float QuadTri::Nodes(const int i0, const int i1) const {return m_Nodes[2*i0+i1];}
float QuadTri::Weights(const int i0) const {return m_Weights[i0];}

float QuadTri::ComputeIntegral(){

  float out = 0;

  for (int i0 = 0; i0 < 3; ++i0) {
    out += m_Weights[i0]*
  }

  
}



// Functions that computes the area of an element given its Nodes indexes
float ComputeAreaElement(const float* vec1, const float* vec2){

  float out;

  out = vec1[0]*vec2[1]-vec1[1]*vec2[0];

  if (out < 0) {
    return -out/2;
  }
  else {
    return out/2;
  }  

}
