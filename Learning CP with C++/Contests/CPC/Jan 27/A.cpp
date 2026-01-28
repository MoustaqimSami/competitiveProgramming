#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> intervals;

    for (int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        intervals.push_back({p, q});
    }

    int count = 0;
    int latest = INT_MIN;

    sort(intervals.begin(), intervals.end(),
         [](const auto &a, const auto &b)
         {
             if (a.second != b.second)
                 return a.second < b.second;
             return a.first < b.first;
         });

    for (int i = 0; i < n; i++)
    {
        if (intervals[i].first >= latest)
        {
            count++;
            latest = intervals[i].second;
        }
    }

    cout << count;
}