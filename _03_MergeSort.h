#pragma once
#include"Sort.h"
class _03_MergeSort:public Sort
{
#if 0
	ʱ�临�Ӷ�O(N * logN);
	����ռ临�Ӷ�O(N);
#endif
public:
	static void mergeSort(vector<int>& arr);
	static void mergeSort(vector<int>& arr, int l, int r);
	static void merge(vector<int>&arr, int l, int m, int r);

};

