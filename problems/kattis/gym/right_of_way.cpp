#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using pii = pair<int, int>;

#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...) ((void)0)
#endif

void solve(string a, string b, string c) {
    unordered_map<string, string> right = {
        {"North", "West"},
        {"South", "East"},
        {"East", "North"},
        {"West", "South"}
    };

    unordered_map<string, string> left = {
        {"North", "East"},
        {"South", "West"},
        {"East", "South"},
        {"West", "North"}
    };    

    unordered_map<string, string> straight = {
        {"North", "South"},
        {"South", "North"},
        {"East", "West"},
        {"West", "East"}
    };    

    if (straight[a] == b && right[a] == c) {
        cout << "Yes\n";
    } else if (left[a] == b && (straight[a] == c || right[a] == c)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, c;
    cin >> a >> b >> c;



    solve(a, b, c);
    return 0;
}
