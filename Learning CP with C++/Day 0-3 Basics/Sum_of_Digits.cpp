#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int a;
        int sum = 0;
        cin >> a;
        bool run = true;

        while (a)
        {
            int x = a % 10;
            sum += x;

            a -= x;
            a /= 10;
        }

        cout << sum << endl;
    }

    return 0;
}