#include <iostream>
#include <vector>
using namespace std;

int bSearch(int arr[], int start, int end, int target)
{

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int eSearch(int arr[], int n, int x)
{
    if (arr[0] == x)
    {
        return 0;
    }

    int i = 1;
    while (i < n && arr[i] <= x)
    {
        i = i * 2;
    }

    return bSearch(arr, i / 2, min(i, n - 1), x);
}

int main()
{
    int nums[] = {1, 3, 6, 9, 11, 14, 16, 18, 22, 26, 29};
    int n = sizeof(nums) / sizeof(int);
    cout << eSearch(nums, n, 26);
}