#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<vector<int>> buckets(t);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        buckets[b].push_back(a);
    }

    priority_queue<int> pq;

    int tot = 0;

    for (int i = t - 1; i >= 0; i--)
    {
        for (int cash : buckets[i])
            pq.push(cash);

        if (!pq.empty())
        {
            tot += pq.top();
            pq.pop();
        }
    }

    cout << tot;
}