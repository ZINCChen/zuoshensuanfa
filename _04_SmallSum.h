#pragma once
#include "Sort.h"
class _04_SmallSum :
    public Sort
{
public:
    static int smallSort(vector<int>& arr);
    static int mergeSort(vector<int>& arr, int l, int r);
    static int merge(vector<int>& arr, int l, int m, int r);
    static int comparator(vector<int>& arr);
    
};

