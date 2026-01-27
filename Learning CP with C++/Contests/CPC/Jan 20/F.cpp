#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    int i = 1;

    while (cin >> a >> b) {
        int x = (365 - (a % 365));
        while ((b + x) % 687 != 0) x += 365;

        cout << "Case " << i++ << ": " << x << "\n";
    }
    return 0;
}
