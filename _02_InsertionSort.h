#pragma once
#include "Sort.h"
class _02_InsertionSort:public Sort
{
#if 0
	ʱ�临�Ӷ�O(N ^ 2);
	����ռ临�Ӷ�O(1);
#endif
public:
	static void insertionSort(vector<int>& arr);
};

