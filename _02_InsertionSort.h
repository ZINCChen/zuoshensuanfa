#pragma once
#include "Sort.h"
class _02_InsertionSort:public Sort
{
#if 0
	时间复杂度O(N ^ 2);
	额外空间复杂度O(1);
#endif
public:
	static void insertionSort(vector<int>& arr);
};

