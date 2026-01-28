#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> days(n);

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        days.push_back(m);
    }

    sort(days.begin(), days.end());
    reverse(days.begin(), days.end());

    int maxDays = INT_MIN;

    for (int j = 0; j < n; j++)
    {
        maxDays = max(maxDays, j + days[j] + 1);
    }

    cout << (maxDays + 1);
}