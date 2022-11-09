cmake_minimum_required(VERSION 3.24.2)

project(TIM)

add_executable(${PROJECT_NAME} main.cpp)

add_library(
  TIMlib TIM.cpp
)

target_link_libraries(${PROJECT_NAME}
  TIMlib
)
