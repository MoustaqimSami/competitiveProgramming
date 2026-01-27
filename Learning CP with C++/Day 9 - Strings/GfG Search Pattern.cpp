#include <bits/stdc++.h>
using namespace std;

void computeLPS(string &pat, vector<int> &lps)
{
    int len = 0;
    lps[0] = 0;

    int n = pat.length();

    int i = 1;
    while (i < n)
    {
        if (pat[i] == lps[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len > 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

vector<int> search(string &pat, string &txt)
{
    int n = txt.length();
    int m = pat.length();

    vector<int> lps(m);
    vector<int> result;

    computeLPS(pat, lps);

    int i = 0;
    int j = 0;

    while (i < n)
    {
        if (txt[i] == pat[j])
        {
            i++;
            j++;

            if (j == m)
            {
                result.push_back(i - j);
                j = lps[j - 1];
            }
            else
            {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }
    }

    return result;
}

int main()
{
    string txt = "aabaacaadaabaaba", pat = "aaba";
    vector<int> res = search(pat, txt);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}