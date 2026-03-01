#include<bits/stdc++.h>
using namespace std;

int main() {
    long double s, p;
    cin >> s >> p;

    s = s * 1.0l;
    p = p * 1.0l;

    long double max = 0.0l;
    long double snow = max;
    for (long long i = 0; i < 10e6; i++)
    {
        snow += s * 1.0l;
        if (max < snow) max = snow;
        long double r = p / 100.0l * snow;
        snow -= r;
    }
    cout << fixed << setprecision(6) << max << endl;
    
}