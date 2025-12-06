#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long D;
    cin >> D;

    for (long long x = 1; x * x <= D; ++x)
    {
        if (D % x != 0)
            continue;
        long long y = D / x;

        long long n2 = (x + y) / 2;
        long long n1 = (y - x) / 2;

        cout << n1 << " " << n2;
        return 0;
    }

    cout << "impossible";
    return 0;
}
