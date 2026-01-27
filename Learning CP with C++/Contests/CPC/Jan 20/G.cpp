#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int n = s.size();

    int answer = n;

    for (int l = 0; l < n; l++)
    {
        for (int len = 2; l + len <= n; len++)
        {
            string t = s.substr(l, len);

            vector<int> count(n + 1, 0);
            for (int i = n - 1; i >= 0; i--)
            {
                count[i] = count[i + 1];
                if (i + len <= n && s.compare(i, len, t) == 0)
                {
                    count[i] = max(count[i], 1 + count[i + len]);
                }
            }

            int k = count[0];
            if (k == 0)
                continue;

            int total = (n - k * len) + k + len;

            answer = min(answer, total);
        }
    }

    cout << answer << "\n";
    return 0;
}
