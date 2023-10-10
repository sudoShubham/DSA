#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int minIndex = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main()
{
    int arr[5] = {2, 5, 3, 6, 8};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}