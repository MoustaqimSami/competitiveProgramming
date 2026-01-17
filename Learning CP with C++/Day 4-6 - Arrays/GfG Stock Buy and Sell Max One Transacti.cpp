#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices)
{
    int minSoFar = INT_MAX;
    int bestProfit = 0;

    for (int p : prices)
    {
        minSoFar = min(minSoFar, p);
        bestProfit = max(bestProfit, p - minSoFar);
    }

    return bestProfit;
}
