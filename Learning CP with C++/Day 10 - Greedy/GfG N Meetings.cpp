#include <bits/stdc++.h>
using namespace std;

int maxMeetings(vector<int> &start, vector<int> &end)
{
    int count = 0;
    int latest = INT_MIN;

    // Need to use a map
    vector<pair<int, int>> times;
    times.reserve(start.size());
    
    for (int i = 0; i < start.size(); i++)
    {
        times.push_back({start[i], end[i]});
    }

    sort(times.begin(), times.end(),
         [](const auto &a, const auto &b)
         {
             if (a.second != b.second)
                 return a.second < b.second;
             return a.first < b.first;
         });

    // Earliest finishing time
    for (int i = 0; i < end.size(); i++)
    {
        if (times[i].first > latest)
        {
            count++;
            latest = times[i].second;
        }
    }

    return count;
}

int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    cout << maxMeetings(start, end);
}