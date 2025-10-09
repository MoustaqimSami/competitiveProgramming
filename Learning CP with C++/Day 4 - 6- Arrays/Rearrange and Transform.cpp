#include <bits/stdc++.h>
using namespace std;

void arrange(vector<long long> &arr)
{
    vector<long long> mod;
    for (int i = 0; i < arr.size(); ++i)
    {
        mod.push_back(arr[arr[i]]);
    }
    arr = mod;
}

int main()
{
    vector<vector<long long>> testCases = {
        {1, 0},
        {4, 0, 2, 1, 3}
    };

    for (int i = 0; i < testCases.size(); ++i) {
        vector<long long> arr = testCases[i];
        arrange(arr);

        cout << "Test case " << i + 1 << ": ";
        for (long long x : arr) cout << x << " ";
        cout << endl;
    }
}