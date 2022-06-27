#include "_02_InsertionSort.h"
void _02_InsertionSort::insertionSort(vector<int>& arr)
{
	if (arr.empty() == true || arr.size() < 2)
	{
		return;
	}
	for (int start = 1; start < arr.size(); start++)
	{
		for (int i = start - 1; i >= 0 && arr[i] > arr[i + 1];i--)
		{
			swap(arr, i, i+1);
		}		
	}
}
