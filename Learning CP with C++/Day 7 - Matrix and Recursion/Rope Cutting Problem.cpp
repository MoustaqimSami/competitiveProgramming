#include <bits/stdc++.h>
using namespace std;

int maxCuts(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;

    int result = max(maxCuts(n - a, a, b, c), max(maxCuts(n - b, a, b, c), maxCuts(n - c, a, b, c)));
    if (result == -1)
        return -1;
    return result + 1;
}

int main()
{
    vector<tuple<int, int, int, int>> testCases = {
        {17, 10, 11, 3}, // Expected: 3
        {10, 9, 7, 11}   // Expected: -1
    };
    vector<int> expected = {3, -1};

    for (int i = 0; i < testCases.size(); ++i) {
        int n, a, b, c;
        tie(n, a, b, c) = testCases[i];
        int result = maxCuts(n, a, b, c);
        cout << "Test case " << i + 1 << ": ";
        cout << "N = " << n << ", A = " << a << ", B = " << b << ", C = " << c << "\n";
        cout << "Expected: " << expected[i] << ", Got: " << result << "\n";
        cout << "Is correct? " << (result == expected[i] ? "Yes" : "No") << "\n\n";
    }
}