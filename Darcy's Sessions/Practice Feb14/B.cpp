#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> memo;
vector<int> days;

int minRDays(int d, int act_y)
{

    if (d == days.size())
        return 0;

    if (memo[d][act_y] != -1)
        return memo[d][act_y];

    int a = INT_MAX, b = INT_MAX, c = INT_MAX;

    // minimum of
    // Try contest
    if (act_y != 1 && (days[d] == 1 || days[d] == 3))
    {
        a = minRDays(d + 1, 1);
    }
    // Try sport
    if (act_y != 2 && (days[d] == 2 || days[d] == 3))
    {
        b = minRDays(d + 1, 2);
    }

    // Try rest
    c = 1 + minRDays(d + 1, 0);

    int ans = min({a, b, c});
    memo[d][act_y] = ans;
    return ans;
};

int main()
{
    int n;
    cin >> n;
    memo.resize(n, vector<int>(3, -1));

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        days.push_back(a);
    }

    int ans = minRDays(0, 0);
    cout << ans;
}