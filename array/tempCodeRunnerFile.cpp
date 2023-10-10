#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{

    vector<int> v;
    // while (1)
    // {
    //     int i;
    //     cout << "Enter data: \n";
    //     cin >> i;
    //     v.push_back(i);
    //     cout << "Capacity: " << v.capacity() << "  Size " << v.size() << " \n";
    // }

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print(v);
    // v.pop_back();
    // cout << "\nAfter Poping\n";
    // print(v);
    // v.clear();

    vector<vector<int> > arr(5, vector<int>(10, 1)); // create vector with 5 rows 10 columns

    for(int row=0;row<arr.size();row++){
        for(int col=0;col<arr[row].size();col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}