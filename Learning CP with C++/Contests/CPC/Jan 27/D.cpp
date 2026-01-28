#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<double> arr(n);

    for (int i = 0; i < n; i++)
    {
        double m;
        cin >> m;
        arr[i] = m;
    }

    sort(arr.begin(), arr.end());

    double minF = 1.0;

    for (int i = 1; i <= n; i++)
    {
        double math = (double)arr[i - 1] / (double(i) * 1.0);
        if (math > 1)
        {
            cout << "impossible" << endl;
            return 0;
        }

        minF = min(minF, math);
    }

    cout << minF;
}