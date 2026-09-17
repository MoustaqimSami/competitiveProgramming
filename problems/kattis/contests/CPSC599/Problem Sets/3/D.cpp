#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        long long m;
        cin >> m;
        cout << m;
        return 0;
    }

    vector<long long> nums;

    for (int i = 0; i < n; i++)
    {
        long long m;
        cin >> m;
        nums.push_back(m);
    }

    long long num = 1;
    long long den = nums[nums.size() - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        long long cur = nums[i];
        num = num + (den * cur);

        if (i != 0)
        {
            long long temp = den;
            den = num;
            num = temp;
        }
    }

    cout << num << "/" << den << endl;
}