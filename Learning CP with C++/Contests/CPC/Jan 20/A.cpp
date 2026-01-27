#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool harshad = false;

    while (!harshad)
    {
        int sum = 0;
        int m = n;
        while (m > 0)
        {
            sum += m % 10;
            m -= (m % 10);
            m /= 10;
        }

        if (n % sum == 0)
            harshad = true;
        else
            n++;
    }

    cout << n;
}