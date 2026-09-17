#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int first; bool ongoing = false;
    while (n--) {
        int x; cin >> x;
        if (!ongoing) {
            first = x;
            ongoing = true;
        } else {
            if (x % first == 0) {
                cout << x << endl;
                ongoing = false;
            }
        }
    }
}