#include <bits/stdc++.h>
using namespace std;

long long MOD = 1000000007;

long long modpow(long long base, long long exp)
{
    long long result = 1;

    while (exp > 0)
    {
        if (exp & 1)
            result = result * base % MOD;

        base = base * base % MOD;
        exp >>= 1;
    }

    return result;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long d;
        cin >> d;

        if (d == 0)
        {
            cout << 0;
            continue;
        }

        cout << 8 * modpow(9, d - 1) % MOD << endl;
    }
    return 0;
}