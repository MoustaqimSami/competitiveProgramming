#include <bits/stdc++.h>
using namespace std;

int main()
{
    double eI = 60, eL = 11;
    double pI = 5, pL = 60;
    double h, p;
    cin >> h >> p;

    int day = 0;
    double cI = pI, cL = pL;

    int i = 0;

    while (true)
    {
        day++;
        cI += (eI * h * p) / 100000.00;
        cL += (eL * h * p) / 100000.00;

        if ((day * h) > (i + 1) * 1000)
        {
            cI += 5;
            i++;
        }

        if (cL < cI)
        {
            cout << day;
            break;
        }
    }

    return 0;
}