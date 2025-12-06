#include <bits/stdc++.h>
using namespace std;

int killCount(int i, int j)
{
    if (j < i)
        return 0;

    if (i >= 1)
    {
        return (j - i) + 1;
    }

    else
    {
        return -1;
    }
}

int main()
{
    int n;
    cin >> n;

    long long kills = 0;

    vector<int> worlds;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        worlds.push_back(k);
    }

    bool impossible = false;

    for (int i = n - 1; i > 0; i--)
    {
        int killsThisRound = killCount(worlds[i], worlds[i - 1]);
        if (killsThisRound >= 0)
        {
            kills += killsThisRound;
            worlds[i - 1] = worlds[i - 1] - killsThisRound;
        }
        else
        {
            impossible = true;
            break;
        }
    }

    if (!impossible)
        cout << kills;
    else
        cout << 1;
}