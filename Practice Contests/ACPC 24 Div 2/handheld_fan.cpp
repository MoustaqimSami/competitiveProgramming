#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    int max = 0;
    int time = w * 60 / 2;

    for (int i = 0; i < n; i++)
    {
        int time_left = time;
        int count = 0;
        vector<int> sol;
        for (int j = i; j < n; j++)
        {
            if (t[j] > time_left)
                break;
            time_left -= t[j];
            sol.push_back(t[j]);
            count++;
        }

        if (count > max)
        {
            max = count;
        }
    }

    cout << max << endl;
}