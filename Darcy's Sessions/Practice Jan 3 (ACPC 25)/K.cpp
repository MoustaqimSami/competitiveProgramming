#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int g, p;
        cin >> g >> p;

        cout << g / (p + 1) << endl;
    }
}