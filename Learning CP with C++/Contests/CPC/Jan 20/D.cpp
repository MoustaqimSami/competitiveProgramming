#include <bits/stdc++.h>
using namespace std;

int apply(int a, int b, int c)
{
    if (b == 0)
        return a * c;
    if (b == 1)
        return a + c;
    if (b == 2)
        return a - c;
    else
    {
        if (c == 0)
            return 0;
        else
            return a / c;
    }
}

char signChar(int op)
{
    return string("*+-/")[op];
}

int main()
{
    int n;
    cin >> n;

    bool found = false;

    while (n--)
    {
        int result;
        cin >> result;
        found = false;

        for (int i = 0; i < 4 && !found; i++)
        {
            for (int j = 0; j < 4 && !found; j++)
            {
                for (int k = 0; k < 4 && !found; k++)
                {
                    // 1) ((4 i 4) j 4) k 4
                    int r1 = apply(apply(apply(4, i, 4), j, 4), k, 4);

                    // 2) (4 i (4 j 4)) k 4
                    int r2 = apply(apply(4, i, apply(4, j, 4)), k, 4);

                    // 3) (4 i 4) j (4 k 4)
                    int r3 = apply(apply(4, i, 4), j, apply(4, k, 4));

                    // 4) 4 i ((4 j 4) k 4)
                    int r4 = apply(4, i, apply(apply(4, j, 4), k, 4));

                    // 5) 4 i (4 j (4 k 4))
                    int r5 = apply(4, i, apply(4, j, apply(4, k, 4)));

                    vector<int> results = {
                        r1,
                        r2,
                        r3,
                        r4,
                        r5,
                    };

                    for (auto res : results)
                    {
                        if (res == result)
                        {
                            cout << "4 " << signChar(i) << " 4 " << signChar(j) << " 4 " << signChar(k) << " 4 = " << result << endl;
                            found = true;
                            break;
                        }
                    }
                }
            }
        }
        if (!found)
            cout << "no solution" << endl;
    }
}