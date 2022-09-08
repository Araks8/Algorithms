#include <vector>

void selection_sort(std::vector<int>& vec)
{
	int min_index;
	for(int i = 0; i < vec.size()-1; ++i)
	{
		min_index = i;
		for(int j = i+1; j < vec.size(); ++j)
		{
			if(vec[min_index] > vec[j]) { min_index = j; }
		}
		if(min_index != i) { std::swap(vec[min_index], vec[i]); }
	}
}
