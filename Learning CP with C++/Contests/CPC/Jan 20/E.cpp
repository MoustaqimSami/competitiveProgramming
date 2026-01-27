#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, p;
    cin >> m >> p;

    vector<int> pos;
    pos.reserve(p + 2);
    pos.push_back(0);

    for (int i = 0; i < p; i++)
    {
        int q;
        cin >> q;
        pos.push_back(q);
    }

    pos.push_back(m);

    vector<bool> can(m + 1, false);

    int n = (int)pos.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int d = pos[j] - pos[i];
            can[d] = true;
        }
    }

    bool first = true;
    for (int d = 1; d <= m; d++)
    {
        if (can[d])
        {
            if (!first)
                cout << ' ';
            cout << d;
            first = false;
        }
    }
    cout << "\n";
    return 0;
}