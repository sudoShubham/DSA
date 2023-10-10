#include <iostream>
using namespace std;

void getMissingNumber(int arr[], int n)
{
    int start = 0, end = n - 1, mid, ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] - mid == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    cout << ans + 1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    getMissingNumber(arr, 6);
}