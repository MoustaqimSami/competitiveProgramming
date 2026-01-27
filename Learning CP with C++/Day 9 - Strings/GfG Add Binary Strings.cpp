#include <bits/stdc++.h>
using namespace std;

string addBinary(string &s1, string &s2)
{
    int j = 0;
    while (j < s1.size() && s1[j] == '0')
        j++;

    int p = 0;
    while (p < s2.size() && s2[p] == '0')
        p++;

    s1.erase(0, j);
    s2.erase(0, p);

    string sum;
    int carry = 0;

    int l1 = s1.size() - 1;
    int l2 = s2.size() - 1;

    sum.reserve(max(l1, l2) + 2);

    while (l1 >= 0 || l2 >= 0 || carry) {
        int val = carry;
        if (l1 >= 0) val += s1[l1--] - '0';
        if (l2 >= 0) val += s2[l2--] - '0';

        sum.push_back(char('0' + (val & 1)));
        carry = val >> 1;
    }

    reverse(sum.begin(), sum.end());
    return sum;
}

int main()
{
    string s1 = "1101", s2 = "111";
    cout << addBinary(s1, s2);
}