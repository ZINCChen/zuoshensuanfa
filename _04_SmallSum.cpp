#include "_04_SmallSum.h"

int _04_SmallSum::smallSort(vector<int>& arr)
{
	if (arr.empty() == true || arr.size() < 2)
	{
		return 0;
	}
	return mergeSort(arr, 0, arr.size() - 1);

}

int _04_SmallSum::mergeSort(vector<int>& arr, int l, int r)
{
	if (l == r)
	{
		return 0;
	}
	int mid = l + ((r - l) >> 1);
	return mergeSort(arr, l, mid) + mergeSort(arr, mid + 1, r) + merge(arr, l, mid, r);
}

int _04_SmallSum::merge(vector<int>& arr, int l, int m, int r)
{
	vector<int> help;
	help.resize(r - l + 1);
	int i = 0;
	int p1 = l;
	int p2 = m + 1;
	int res = 0;
	while (p1 <= m && p2 <= r)
	{
		res += arr[p1] < arr[p2] ? arr[p1] * (r - p2 + 1) : 0;
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
    return res;
}

int _04_SmallSum::comparator(vector<int>& arr)
{
	if (arr.empty() == true || arr.size() < 2)
	{
		return 0;
	}
	int res = 0;
	for (int i = 1; i < arr.size(); i++)
	{
		for (int j = 0; j < i; j++)
		{
			res += arr[j] < arr[i] ? arr[j] : 0;
		}
	}
	return res;
}
