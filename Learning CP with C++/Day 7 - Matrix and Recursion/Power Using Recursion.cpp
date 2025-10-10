#include <bits/stdc++.h>
using namespace std;

int RecursivePower(int n, int p) {
    if (p == 0) return 1;
    return n * RecursivePower(n, p - 1);    
}


int main() {
    vector<pair<int, int>> testCases = {
        {9, 9},   // Expected: 387420489
        {2, 9}    // Expected: 512
    };
    vector<int> expected = {387420489, 512};

    for (int i = 0; i < testCases.size(); ++i) {
        int n = testCases[i].first, p = testCases[i].second;
        int result = RecursivePower(n, p);
        cout << "Test case " << i + 1 << ": n = " << n << ", p = " << p << "\n";
        cout << "Expected: " << expected[i] << ", Got: " << result << "\n";
        cout << "Is correct? " << (result == expected[i] ? "Yes" : "No") << "\n\n";
    }
}