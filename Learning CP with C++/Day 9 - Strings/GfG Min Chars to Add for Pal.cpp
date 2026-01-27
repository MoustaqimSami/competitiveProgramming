#include <bits/stdc++.h>
using namespace std;

int minChar(string &s)
{
    int n = s.size();
    string org = s;
    reverse(s.begin(), s.end());

    for (int i = 0; i < n - 1; i++)
    {
        string sub = s.substr(i, n - i);
        if (org.rfind(sub, 0) == 0)
        {
            return i;
        }
    }
    return n - 1;
}

int main()
{
    string s;
    getline(cin, s);
    cout << minChar(s);
}