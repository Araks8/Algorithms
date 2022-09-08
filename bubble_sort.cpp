#include <vector>
#include <iostream>

void bubble_sort(std::vector<int>& vec)
{
	for(int i = 0; i < vec.size()-1; ++i)
	{	bool is_sorted = true;
		for(int j = 0; j < vec.size()-1-i; ++j)
		{
			if(vec[j] > vec[j+1])
			{
				std::swap(vec[j],vec[j+1]);
				is_sorted = false;
			}
		}
		if(is_sorted) { break; }
	}
}
