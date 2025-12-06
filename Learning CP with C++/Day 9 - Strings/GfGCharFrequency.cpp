#include <bits/stdc++.h>
using namespace std;

int charFreq(string s)
{
    vector<int> count(26);
    for (char c : s)
    {
        count[c - 'a']++;
    }
    for (int i = 0; i < 26; ++i)
    {
        if (count[i] > 0)
        {
            cout << (char)(i + 'a') << ":" << count[i] << "\n";
        }
    }

    return 1;
}

int main()
{
    string s;
    getline(cin, s);
    charFreq(s);
}
