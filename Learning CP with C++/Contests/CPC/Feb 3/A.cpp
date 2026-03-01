#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int g = 360;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        g = gcd(g, a);
    }

    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        if (a % g == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}