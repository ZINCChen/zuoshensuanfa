#pragma once
#include "Base.h"
class Sort
{
public:
	static void swap(vector<int>& arr, int i, int j);
	static void rightMathod(vector<int>& arr);
	static vector<int> generateRandomArray(int size, int value);
	static vector<int> copyArray(vector<int>arr);
	static bool isEqual(vector<int> arr1, vector<int> arr2);
	static void printArray(vector<int> arr);
};

