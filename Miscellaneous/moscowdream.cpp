#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    bool result = false;

    if ((a + b + c) >= n && a > 0 && b > 0 && c > 0) {
        if (n >= 3) result = true;
    }
        

    if (result)
        cout << "YES";
    else
        cout << "NO";
}