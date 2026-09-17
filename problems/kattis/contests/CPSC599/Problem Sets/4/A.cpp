#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> org(n);
    for (int i = 0; i < n; i++)
    {
        org[i] = i;
    }

    vector<int> shuffled = org;

    bool back = false;
    int count = 0;
    for (int i = 0; i < n && !back; i++)
    {
        vector<int> newShuffle(n);
        int l = 0, r = n / 2;

        int k = 0;
        if (s == "out")
        {
            if (n % 2 != 0)
                r = n / 2 + 1;
            while (k < n)
            {
                newShuffle[k++] = shuffled[l++];
                newShuffle[k++] = shuffled[r++];
            }
        }
        else
        {
            while (k < n)
            {
                newShuffle[k++] = shuffled[r++];
                newShuffle[k++] = shuffled[l++];
            }
        }

        shuffled = newShuffle;

        cout << endl;

        count++;
        bool match = true;
        for (int j = 0; j < n; j++)
        {
            if (org[j] != shuffled[j])
            {
                match = false;
                break;
            }
        }

        if (match)
            back = true;
    }

    cout << count << endl;
}