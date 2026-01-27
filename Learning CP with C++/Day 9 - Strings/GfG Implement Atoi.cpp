#include <bits/stdc++.h>
using namespace std;

int myAtoi(string &s)
{
    long long num = 0;
    int n = s.size();
    int i = 0;

    while (i < n && s[i] == ' ')
    {
        i++;
    }

    int sign = 1;
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }

    while (i < n && s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        long long val = sign * num;
        if (val > INT_MAX)
            return INT_MAX;
        if (val < INT_MIN)
            return INT_MIN;

        i++;
    }

    return (int)num * sign;
}

int main()
{
    string s = "-999999999999";
    cout << myAtoi(s);
}
