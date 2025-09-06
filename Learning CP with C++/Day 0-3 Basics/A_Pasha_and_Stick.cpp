#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    if (n % 2 == 0)
    {
        n = n / 2;

        for (int i = 1; i < (n + 1) / 2; ++i)
        {
            count++;
        }
    }
    cout << count;
}

/* EXPLANATION */
/* Since it has to form a rectangle, we divide the length by 2, as opposite sides need to be equal hence we need two sides.
Now we divide it + 1 by 2 again to get the mid point, after which the sides we get are duplicates. (1,4) and (4,1) for example
Why the +1? to avoid lowerbound operations from interrupting.
Why start from 1? because sides can not be of length 0.
so for the case of 20:
20/2 = 10
loop runs from 1 to 11/2 = 5
1,2,3,4
Solved!
*/