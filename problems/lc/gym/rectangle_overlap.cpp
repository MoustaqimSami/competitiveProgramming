#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using pii = pair<int, int>;

#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...) ((void)0)
#endif

bool solve(vector<int>& rec1, vector<int>& rec2) {
    if (rec2[2] <= rec1[0] || rec1[2] <= rec2[0] || rec2[3] <= rec1[1] || rec1[3] <= rec2[1]) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a = {0, 0, 2, 2};
    vector<int> b = {1, 1, 3, 3};
    
    bool ans = solve(a, b);
    if (ans) cout << "true\n";
    else cout << "false\n";
    
    return 0;
}
