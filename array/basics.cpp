#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // int arr[101];
    // char ch[100];
    // bool flags[10];
    // long num[100];

    // cout << "Base Address of arr is " << arr << "\n";
    // cout << "Size of arr is " << sizeof(arr) << " Bytes\n";

    // Array Initialization
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[5] = {1, 2, 3, 4, 5};
    int arr4[5] = {1, 2};

    // Q1
    // int array[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "enter value for index " << i << "\n";
    //     cin >> array[i];
    //     array[i] = array[i] * 2;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << array[i] << " ";
    // }

    // Q2
    // cout << INT_MIN << ":" << INT_MAX;
    int min = INT_MAX;
    int max = INT_MIN;
    int arr[10] = {1, 4, 2, 5, 8, 4, 22, 34, 56, 89};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Min " << min << ":: Max " << max;
}