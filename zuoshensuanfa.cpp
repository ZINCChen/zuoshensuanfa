// zuoshensuanfa.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "_00_BubbleSort.h"
#include "_01_SelectionSort.h"
#include "_02_InsertionSort.h"
int main()
{
    int numSort;
    cin >> numSort;
    int testTime = 500;
    int size = 10;
    int value = 100;
    bool succeed = true;
    for (int i = 0; i < testTime; i++)
    {
        vector<int> arr1 = Sort::generateRandomArray(size, value);
        vector<int> arr2 = Sort::copyArray(arr1);
        vector<int> arr3 = Sort::copyArray(arr1);
        switch (numSort)
        {
        case 0:
            _00_0BubbleSort::bubbleSort(arr1);
            break;
        case 1:
            _01_SelectionSort::selectionSort(arr1);
            break;
        case 2:
            _02_InsertionSort::insertionSort(arr1);
            break;
        default:
            cout << "You are wrong!" << endl;
            cout << "重新输入numSort：";
            cin >> numSort;
            break;
        }
        
        Sort::rightMathod(arr2);
        if (!Sort::isEqual(arr1, arr2))
        {
            succeed = false;
            Sort::printArray(arr3);
            break;
        }
    }
    cout << (succeed?"Nice!":"Fucking fucked!");
    vector<int> arr = Sort::generateRandomArray(size, value);
    switch (numSort)
    {
    case 0:
        _00_0BubbleSort::bubbleSort(arr);
        cout << "原始数据：" << endl;
        Sort::printArray(arr);
        cout << "bubbleSort" << endl;
        cout << "**********************************" << endl;
        Sort::printArray(arr);
        break;
    case 1:
        _01_SelectionSort::selectionSort(arr);
        cout << "原始数据：" << endl;
        Sort::printArray(arr);
        cout << "selectionSort" << endl;
        cout << "**********************************" << endl;
        Sort::printArray(arr);
        break;
    case 2:
        _02_InsertionSort::insertionSort(arr);
        cout << "原始数据：" << endl;
        Sort::printArray(arr);
        cout << "insertionSort" << endl;
        cout << "**********************************" << endl;
        Sort::printArray(arr);
        break;
    default:
        cout << "You are wrong!" << endl;
        break;
    }
}
