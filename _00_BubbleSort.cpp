#include "_00_BubbleSort.h"
void _00_0BubbleSort::bubbleSort(vector<int>& arr)
{
	if (arr.empty() == true || arr.size() < 2)
	{
		return;
	}
	for (int end = arr.size() - 1; end > 0; end--)
	{
		for (int i = 0; i < end; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr, i, i + 1);
			}
		}
	}
}
