#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxProfit = INT_MIN;
    int msf = prices[0];
    int profit;
    for (int i = 0; i < prices.size(); i++)
    {
        msf = min(prices[i], msf);
        profit = prices[i] - msf;
        maxProfit = max(profit, maxProfit);
    }

    return maxProfit;
}

int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(4);

    int result = maxProfit(v);
    cout << result;
}