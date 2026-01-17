#include <bits/stdc++.h>
using namespace std;

int main()
{

    int low = 1, high = 1000;

    for (int i = 0; i < 10; i++)
    {
        int guess = (low + high) / 2;
        cout << guess << endl;
        cout.flush();

        string comment;
        getline(cin, comment);

        if (comment == "correct")
            break;
        else if (comment == "lower")
        {
            high = guess - 1;
        }
        else if (comment == "higher")
        {
            low = guess + 1;
        }
    }
}

