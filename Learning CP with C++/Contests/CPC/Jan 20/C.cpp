#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int count = 0;

    for (long long i = 1; i < 100000; i++)
    {
        if (i * (i + 1) * (i + 2) < n) count++;
        else break;
    }

    cout << count;
    
}