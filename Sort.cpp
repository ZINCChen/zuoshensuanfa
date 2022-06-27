#include "Sort.h"
void Sort::swap(vector<int>& arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
void Sort::rightMathod(vector<int>& arr)
{
	sort(arr.begin(), arr.end());
}
vector<int> Sort::generateRandomArray(int size, int value) 
{
#if 0
	(rand() % (b - a)) + a[a，b);
	(rand() % (b - a + 1)) + a[a，b];
	(rand() % (b - a)) + a + 1				(a，b];
	a + (int)b * rand() / (RAND_MAX + 1)	a到b之间的随机整数;
	rand() / double(RAND_MAX)				0～1之间的浮点数;
	rand()									范围是[0, RAND_MAX];
	10.0 * rand()							得到一个浮点数，是10倍的[0, RAND_MAX]，[0.0, 10.0 * RAND_MAX];

#endif
	vector<int> arr;
	arr.resize(rand() % (size + 1));
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i] = rand() % (value + 1) - rand() % value;
	}
	return arr;

}
vector<int> Sort::copyArray(vector<int>arr) 
{
	if (arr.empty() == true)
	{
		return arr;
	}
	vector<int> res;
	for (int i : arr)
	{
		res.push_back(i);
	}
	return res;
}
bool Sort::isEqual(vector<int> arr1, vector<int> arr2)
{
	if ((arr1.empty() == true && arr2.empty() != true)
		|| (arr2.empty() == true && arr2.empty() != true))
	{
		return false;
	}
	if (arr1.empty() == true && arr2.empty() == true)
	{
		return true;
	}
	if (arr1.size() != arr2.size())
	{
		return false;
	}
	for (int i = 0; i < arr1.size(); i++)
	{
		if (arr1[i] != arr2[i])
		{
			return false;
		}
	}
	return true;
}
void Sort::printArray(vector<int> arr) 
{
	for (int i : arr)
	{
		cout << i << ' ';
	}
	cout << endl;
}