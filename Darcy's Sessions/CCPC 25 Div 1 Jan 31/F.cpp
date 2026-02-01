#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<double> pools(n);

    for (int i = 0; i < n; i++)
    {
        double p;
        cin >> p;
        pools[i] = p;
    }

    sort(pools.begin(), pools.end());
    reverse(pools.begin(), pools.end());

    double truck = 1.0;

    for (int i = 0; i < n; i++)
    {
        if (truck > pools[i])
        {
            double fillup = (truck + pools[i]) / 2.0;
            pools[i] = fillup;
            truck = fillup;
        }
    }

    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum += pools[i];
    }

    cout << sum;
}