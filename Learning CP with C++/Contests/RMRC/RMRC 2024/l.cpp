#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int range[2];

    cin >> range[0] >> range[1];

    for (int i = 0; i < n - 1; ++i){
        int l, r;
        cin >> l >> r;

        if (l > range[0]) range[0] = l;
        if (r < range[1]) range[1] = r;
    }

    if (range[0] <= range[1]){
        cout << (range[1] - range[0] + 1) << " ";
        cout << range[0];
    } else {
        cout << "bad news";
    }
}