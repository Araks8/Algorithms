#include <iostream>
#include "algorithms.h"

int main(){

  std::cout << GCD(36,60);
  std::vector<int> vec {5,7,8,9};
  bubble_sort(vec);
  std::vector<int> vec2 {3,5,8,1};
  //selection_sort(vec);
  insertion_sort(vec);
  for(auto i : vec)
  {
	std::cout<<i;
  }
  return 0;
}
