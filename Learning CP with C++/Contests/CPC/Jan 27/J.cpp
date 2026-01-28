#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t, ta, tb;
    cin >> a >> b >> t >> ta >> tb;

    int n;
    cin >> n;

    vector<int> jobs(n);

    for (int i = 0; i < n; i++)
    {
        int ra, rb;
        cin >> ra >> rb;

        ra = (ra - a) > 0 ? (ra - a) * ta : 0;
        rb = (rb - b) > 0 ? (rb - b) * tb : 0;

        int rt = ra + rb;
        jobs[i] = rt;
    }

    sort(jobs.begin(), jobs.end());

    for (int i = 0; i < n; i++)
    {
        cout << jobs[i] << " ";
    }

    int tl = t;
    int count = 0;

    for (int i = 0; i < n && tl >= 0; i++)
    {
        tl -= jobs[i];
        if (tl >= 0)
            count++;
    }

    cout << count;
    return 0;
}