#include <iostream>
#include "algorithms.h"

int main(){

  std::cout << GCD(36,60);
  std::vector<int> vec {5,7,8,9};
  bubble_sort(vec);D
  std::vector<int> vec2 {3,5,8,1};
  selection_sort(vec);

  return 0;
}
