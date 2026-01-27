#include<bits/stdc++.h>
using namespace std;

int main() {
    int L, D, X;

    cin >> L >> D >> X;

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = L; i <= D; i++)
    {
        int sum = 0;
        int j = i;
        while (j > 0) {
            sum += j % 10;
            j -= (j % 10);
            j /= 10;
        }

        if (sum == X) {
            if (i < min) min = i;
            if (i > max) max = i;
        }

    }

    cout << min << endl;
    cout << max << endl;
    
}