#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max = 0;
    int min = INT_MAX;

    for (int i = 0; i < n; ++i){
        int flight;
        cin >> flight;

        if (flight > max) max = flight;
        if (flight < min) min = flight;
    }

    int net = (min - max / 2);
    if (net > 0) cout << net;
    else cout << 0;
}