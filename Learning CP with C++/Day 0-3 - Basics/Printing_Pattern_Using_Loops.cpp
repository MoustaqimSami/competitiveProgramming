#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // n-(distance from nearest border)

    for (int r = 0; r < 2 * n - 1; ++r)
    {
        for (int c = 0; c < 2 * n - 1; ++c)
        {
            int rEnd = 2 * n - 2 - r;
            int cEnd = 2 * n - 2 - c;
            int borderDistance = min({r, c, rEnd, cEnd});
            cout << n - borderDistance << " ";
        }
        cout << endl;
    }
}