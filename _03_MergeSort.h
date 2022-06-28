#pragma once
#include"Sort.h"
class _03_MergeSort:public Sort
{
#if 0
	时间复杂度O(N * logN);
	额外空间复杂度O(N);
#endif
public:
	static void mergeSort(vector<int>& arr);
	static void mergeSort(vector<int>& arr, int l, int r);
	static void merge(vector<int>&arr, int l, int m, int r);

};

