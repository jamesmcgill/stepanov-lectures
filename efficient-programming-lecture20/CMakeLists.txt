cmake_minimum_required(VERSION 3.8)
project (test_sort)
  
add_executable(test_sort test_sort.cpp)
target_compile_features(test_sort PUBLIC cxx_std_11)

