#include <bits/stdc++.h>
using namespace std;

int getMinDiff(vector<int> &arr, int k)
{
    if (arr.size() <= 1)
        return 0;

    int n = arr.size();
    sort(arr.begin(), arr.end());
    int ans = arr[n - 1] - arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - k < 0) continue;

        int minH = min(arr[0] + k, arr[i] - k);
        int maxH = max(arr[n - 1] - k, arr[i-1] + k);

        ans = min(ans, maxH - minH);
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 8, 10, 6, 4, 6, 9, 1};
    int i = getMinDiff(arr, 7);
    cout << i;
}