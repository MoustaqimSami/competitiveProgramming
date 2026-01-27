#include <bits/stdc++.h>
using namespace std;

int main()
{
    int correct = 0;
    int time = 0;

    int t;

    map<char, pair<int, bool>> problems;
    while (cin >> t)
    {
        if (t == -1)
            break;

        char p;
        string r;

        cin >> p >> r;

        if (problems[p].second != true)
        {
            if (r == "wrong")
            {
                problems[p].second = false;
                problems[p].first += 20;
            }
            else
            {
                problems[p].first += t;
                problems[p].second = true;
            }
        }
    }

    for (auto m : problems)
    {
        if (m.second.second == true)
        {
            correct++;
            time += m.second.first;
        }
    }

    cout << correct << " " << time;
}