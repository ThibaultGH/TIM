#include <iostream>

#include "TIM.hpp"

using namespace std;

QuadTri::QuadTri(){

  m_Nodes = (float *) malloc(sizeof(float)*6);
  m_Nodes[0] = 1/2;
  m_Nodes[1] = 1/2;
  m_Nodes[2] = 1/2;
  m_Nodes[3] = 0;
  m_Nodes[4] = 0;
  m_Nodes[5] = 1/2;


}

QuadTri::QuadTri(const float *TriangleCoord){

  m_Nodes = (float *) malloc(sizeof(float)*6);
  m_Nodes[0] = 1/2;
  m_Nodes[1] = 1/2;
  m_Nodes[2] = 1/2;
  m_Nodes[3] = 0;
  m_Nodes[4] = 0;
  m_Nodes[5] = 1/2;


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
