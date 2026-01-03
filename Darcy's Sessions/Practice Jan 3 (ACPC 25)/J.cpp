#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double a, b;
        cin >> a >> b;

        if (a < -180.00 || a > 180.00 || b < -90.00 || b > 90.00)
        {
            cout << "INVALID" << endl;
        }
        else
        {
            cout << "VALID" << endl;
        }
    }
}