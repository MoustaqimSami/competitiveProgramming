#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mod = n % 4;

    if (mod == 1 || mod == 2) cout << 1;
    if (mod == 3 || mod == 0) cout << 0;
    return 0;
}