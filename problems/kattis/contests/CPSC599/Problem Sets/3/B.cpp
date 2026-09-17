#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long modSum = 0;
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            long long c;
            cin >> c;
            modSum = (modSum + (c % (ll)m)) % m;
        }

        if (modSum == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}