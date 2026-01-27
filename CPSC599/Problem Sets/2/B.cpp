#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;

    cin >> n >> p;

    vector<pair<int, bool>> problems(n);

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        problems[i].first = t;
        problems[i].second = false;
    }

    int te = 0;
    int tl = 300;
    int correct = 0;

    if (problems[p].first <= 300)
    {
        te += problems[p].first;
        tl -= problems[p].first;
        problems[p].second = true;
        correct++;
    }
    else
    {
        cout << 0 << " " << 0;
        return 0;
    }

    sort(problems.begin(), problems.end());

    int i = 0;
    while (tl > 0 && i < n)
    {
        if (problems[i].second == false)
        {
            if (problems[i].first <= tl)
            {
                te += problems[i].first + (300 - tl);
                tl -= problems[i].first;
                problems[i].second = true;
                correct++;
            }
            else
            {
                cout << correct << " " << te;
                return 0;
            }
        }
        i++;
    }

    cout << correct << " " << te;
}