#include <bits/stdc++.h>
using namespace std;

int main()
{
    int theta, v, dmin, dmax;
    cin >> theta >> v >> dmin >> dmax;

    double pi = 2 * acos(0.0);

    double angle = (double)theta * pi / 180.00;

    double time = ((v * sin(angle)) / 9.81) * 2.00;

    double hSpeed = v * cos(angle);

    double tmin = (double)dmin / hSpeed;
    double tmax = (double)dmax / hSpeed;

    if (time >= tmin && time <= tmax)
        cout << "POSSIBLE\n";
    else
        cout << "IMPOSSIBLE\n";
}