#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        arr[i] = m;
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    vector<int> res;

    int l = 0, r = n - 1;

    while (l <= r)
    {
        res.push_back(arr[r--]);
        if (l <= r)
            res.push_back(arr[l++]);
    }

    reverse(res.begin(), res.end());

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
}