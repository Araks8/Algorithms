#include <iostream>
#include "algorithms.h"

int main(){
  //std::cout << GCD(36,60);
  std::vector<int> vec {3,5,8,1};
  selection_sort(vec);
  for(auto i : vec)
  {
	std::cout << i;
  }
}
