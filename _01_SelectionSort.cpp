#include "_01_SelectionSort.h"
void _01_SelectionSort::selectionSort(vector<int>& arr)
{
	if (arr.empty() == true || arr.size() < 2)
	{
		return;
	}
	for (int start = 0; start <arr.size()-1; start++)
	{
		int minIndex = start;
		for (int i = start+1; i < arr.size(); i++)
		{
			minIndex = arr[minIndex] > arr[i] ? i : minIndex;
		}
		swap(arr, start, minIndex);
	}
}
