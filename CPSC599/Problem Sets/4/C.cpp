#include <bits/stdc++.h>
using namespace std;

bool hates(const string &x, const string &y, unordered_map<string, unordered_set<string>> &hated)
{
    auto it = hated.find(x);
    if (it == hated.end())
        return false;
    return it->second.count(y) > 0;
}

bool canFinish(const vector<string> &prefOrder,
               unordered_map<string, unordered_set<string>> &hated,
               vector<int> &used,
               const string &last,
               int placed,
               int n)
{
    if (placed == n)
        return true;

    for (int i = 0; i < n; i++)
    {
        if (used[i])
            continue;

        const string &c = prefOrder[i];
        if (!last.empty() && hates(last, c, hated))
            continue;

        used[i] = 1;
        if (canFinish(prefOrder, hated, used, c, placed + 1, n))
        {
            used[i] = 0;
            return true;
        }

        used[i] = 0;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int z;
    cin >> z;
    while (z--)
    {
        int n;
        cin >> n;

        vector<string> prefOrder(n);
        for (int i = 0; i < n; i++)
            cin >> prefOrder[i];

        int m;
        cin >> m;

        unordered_map<string, unordered_set<string>> hated;
        hated.reserve(n * 2);

        for (int i = 0; i < m; i++)
        {
            string a, b;
            cin >> a >> b;
            hated[a].insert(b);
            hated[b].insert(a);
        }

        vector<string> colors = prefOrder;
        sort(colors.begin(), colors.end());

        long long count = 0;

        do
        {
            bool bad = false;
            for (int j = 0; j < n - 1; j++)
            {
                if (hates(colors[j], colors[j + 1], hated))
                {
                    bad = true;
                    break;
                }
            }
            if (!bad)
                count++;
        } while (next_permutation(colors.begin(), colors.end()));

        vector<string> painting;
        painting.reserve(n);

        vector<int> used(n, 0);
        string last = "";

        for (int pos = 0; pos < n; pos++)
        {
            for (int i = 0; i < n; i++)
            {
                if (used[i])
                    continue;

                const string &candidate = prefOrder[i];

                if (!last.empty() && hates(last, candidate, hated))
                    continue;

                used[i] = 1;
                bool ok = canFinish(prefOrder, hated, used, candidate, pos + 1, n);
                if (ok)
                {
                    painting.push_back(candidate);
                    last = candidate;
                    break;
                }
                used[i] = 0;
            }
        }

        cout << count << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << painting[i] << (i + 1 == n ? '\n' : ' ');
        }
    }
    return 0;
}
