#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> boxes(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> boxes[i];
    }

    int h1, h2;
    cin >> h1 >> h2;

    vector<int> first, second;

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            for (int k = j + 1; k < 6; k++)
            {
                if (boxes[i] + boxes[j] + boxes[k] == h1)
                {
                    first = {boxes[i], boxes[j], boxes[k]};

                    for (int x = 0; x < 6; x++)
                    {
                        if (x != i && x != j && x != k)
                        {
                            second.push_back(boxes[x]);
                        }
                    }
                }
            }
        }
    }

    sort(first.rbegin(), first.rend());
    sort(second.rbegin(), second.rend());

    for (int i = 0; i < 3; i++)
    {
        cout << first[i] << " ";
    }

    for (int i = 0; i < 3; i++)
    {
        cout << second[i] << " ";
    }

    cout << endl;
}