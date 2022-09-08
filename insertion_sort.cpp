#include <vector>

void insertion_sort(std::vector<int>& vec)
{
	int key;
	int j;
	for (int i = 1; i < vec.size(); ++i)
	{
		key = vec[i];
		for(j = i-1; j >= 0 && vec[j] > key; ++j)
		{
			vec[j + 1] = vec[j];
			j-=1;
		}
		vec[j + 1] = key;
			
	}
}
