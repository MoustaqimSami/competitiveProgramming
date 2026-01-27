#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string &s1, string &s2)
{
    if (s1.size() != s2.size()) return false;

    unordered_map<char, int> count_s1;
    for (char c : s1)
    {
            count_s1[c]++;
    }

    unordered_map<char, int> count_s2;
    for (char c : s2)
    {
            count_s2[c]++;
    }

    for (auto pair : count_s1)
    {
        if (count_s2[pair.first] != pair.second)
            return false;
    }

    return true;
}

int main()
{
    string s1 = "geeks", s2 = "kseeg";
    cout << areAnagrams(s1, s2);
}