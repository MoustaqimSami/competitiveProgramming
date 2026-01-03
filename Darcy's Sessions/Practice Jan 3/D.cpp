#include <bits/stdc++.h>
using namespace std;

int main()
{
    double D, H;
    cin >> D >> H;

    double angle = atan(H / D);
    double limit = 15.0 * M_PI / 180.0;

    if (angle < limit)
        cout << "Yes";
    else
        cout << "No";
}