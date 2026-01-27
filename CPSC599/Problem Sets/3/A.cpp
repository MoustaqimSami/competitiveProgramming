#include <bits/stdc++.h>
using namespace std;

long long toCents(long double x)
{
    return llround(x * 100.0L);
}

int main()
{
    double R;
    long double B, M;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        cin >> R >> B >> M;

        long long Bc = toCents(B), Mc = toCents(M);
        long double rate = R / 100.0L;
        bool ok = false;

        for (int count = 1; count <= 1200; count++)
        {

            long long interest = llround((long double)Bc * rate);

            long long newB = Bc + interest - Mc;

            if (newB >= Bc)
                break;

            Bc = newB;

            if (Bc <= 0)
            {
                cout << count << "\n";
                ok = true;
                break;
            }
        }

        if (!ok)
            cout << "impossible\n";
    }
}