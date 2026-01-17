#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices)
{
    int profit = 0;
    for(int i = 1; i < prices.size(); i++){
        if (prices[i] > prices[i - 1]) profit += prices[i] - prices[i-1];
    }

    cout << profit;
}

int main()
{
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    int profit = maximumProfit(prices);
    return 0;
}