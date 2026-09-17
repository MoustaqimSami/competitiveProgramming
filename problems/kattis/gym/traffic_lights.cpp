#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> r(n), g(n);

    long long totalPeriod = 1;

    for (int i = 0; i < n; i++) {
        cin >> r[i] >> g[i];

        long long period = r[i] + g[i];
        totalPeriod = lcm(totalPeriod, period);
    }

    long long t = 0;

    while (t < totalPeriod) {
        bool allGreen = true;
        long long nextTime = t;

        for (int i = 0; i < n; i++) {
            long long period = r[i] + g[i];
            long long pos = t % period;

            // Light is currently red
            if (pos < r[i]) {
                allGreen = false;

                // Earliest time this light becomes green
                long long nextGreen = t + (r[i] - pos);

                nextTime = max(nextTime, nextGreen);
            }
        }

        if (allGreen) {
            cout << t << '\n';
            return 0;
        }

        t = nextTime;
    }

    cout << -1 << '\n';

    return 0;
}