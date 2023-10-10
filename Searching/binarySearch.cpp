#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {2, 4, 6, 8, 15, 15, 15, 15, 19};
    int target = 15;
    int n = 9, start = 0, end = n - 1, mid;
    int firstIndex = -1;
    while (start <= end)
    {
        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            firstIndex = mid;
            end = mid - 1;
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

    if (firstIndex == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "First occurance at index " << firstIndex;
    }
}