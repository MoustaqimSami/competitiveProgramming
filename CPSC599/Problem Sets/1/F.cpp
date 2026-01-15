#include <bits/stdc++.h>
using namespace std;

void election()
{
    int n;
    cin >> n;

    vector<int> votes(n);
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> votes[i];
        total += votes[i];
    }

    int winner = -1, maxVotes = -1, maxCount = -1;

    for (int i = 0; i < n; i++)
    {
        if (votes[i] > maxVotes)
        {
            maxVotes = votes[i];
            winner = i;
            maxCount = 1;
        }
        else if (votes[i] == maxVotes)
        {
            maxCount++;
        }
    }

    if (maxCount > 1)
    {
        cout << "no winner" << endl;
    }
    else if (maxVotes * 2 > total)
    {
        cout << "majority winner " << winner + 1 << endl;
    }
    else
    {
        cout << "minority winner " << winner + 1 << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        election();
    }

    return 0;
}