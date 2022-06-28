#include "_03_MergeSort.h"

void _03_MergeSort::mergeSort(vector<int>& arr)
{
	if (arr.empty() == true || arr.size() < 2)
	{
		return;
	}
	mergeSort(arr, 0, arr.size() - 1);
}

void _03_MergeSort::mergeSort(vector<int>& arr, int l, int r)
{
	if (l == r)
	{
		return;
	}
	int mid = l + ((r - l) >> 1);
	mergeSort(arr, l, mid);
	mergeSort(arr, mid + 1, r);
	merge(arr, l, mid, r);
	
}

void _03_MergeSort::merge(vector<int>& arr, int l, int m, int r)
{
	vector<int> help;
	help.resize(r - l + 1);
	int i = 0;
	int p1 = l;
	int p2 = m + 1;
	while (p1 <= m && p2 <= r)
	{
		help[i++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];
	}
	while (p1 <= m)
	{
		help[i++] = arr[p1++];
	}
	while (p2 <= r)
	{
		help[i++] = arr[p2++];
	}
	for (int i = 0; i < help.size(); i++)
	{
		arr[l + i] = help[i];
	}
}
