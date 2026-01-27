#include <bits/stdc++.h>
using namespace std;

bool areRotations(string &s1, string &s2)
{
    string bigString = s1 + s1;
    if (bigString.find(s2) != string::npos) return true;

    return false;
}

int main()
{
    string s1 = "abcd", s2 = "acbd";
    cout << areRotations(s1, s2);
}