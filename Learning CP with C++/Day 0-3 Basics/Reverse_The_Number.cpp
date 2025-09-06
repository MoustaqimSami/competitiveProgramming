#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int a;
        int b = 0;
        cin >> a;
        bool run = true;

        while (a)
        {
            int x = a % 10;
            b *= 10;
            b += x;

            a -= x;
            a /= 10;
        }

        cout << b << endl;
    }

    return 0;
}