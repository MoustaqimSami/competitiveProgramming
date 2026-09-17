#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double m, n;
    int t;
    cin >> m >> n >> t;

    long double result = 0;
    if (t == 1)
    {
        result = 1;
        for (long long i = 1; i <= n; i++)
        {
            result *= i;
            if (result > m)
            {
                cout << "TLE";
                return 0;
            }
        }
    }
    else if (t == 2)
    {
        long double bound = log2(m);
        if (n <= bound + 1e-12)
            cout << "AC";
        else
            cout << "TLE";

        return 0;
    }
    else if (t == 3)
    {
        result = n * n * n * n;
    }
    else if (t == 4)
    {
        result = n * n * n;
    }
    else if (t == 5)
    {
        result = n * n;
    }
    else if (t == 6)
    {
        result = n * log2(n);
    }
    else
    {
        result = n;
    }

    if (result <= m)
        cout << "AC";
    else
        cout << "TLE";
}