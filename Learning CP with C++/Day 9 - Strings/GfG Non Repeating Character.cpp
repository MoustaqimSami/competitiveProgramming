#include <bits/stdc++.h>
using namespace std;

char nonRepeatingChar(string &s)
{
    map<char, int> count;
    for (char c : s) {
        count[c]++;
    }

    for (char c : s) {
        if (count[c] == 1) return c;
    }

    return '$';
}

int main()
{
    string s = "geeksofrgeeks";
    cout << nonRepeatingChar(s);
}