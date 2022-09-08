#include <iostream>
#include "algorithms.h"

int main(){

  std::cout << GCD(36,60);
  std::vector<int> vec {5,7,8,9};
  bubble_sort(vec);

  return 0;
}
