#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int runs = min(n, m);

    int a[n][m];


    // Get the matrix n x m
    for (int i = 0; i < runs; ++i)
    {
        for (int j = 0; j < runs; ++j)
        {
            cin >> a[i][j];
        }
    }

    bool match = 1;
    for (int i = 0; i < runs; ++i){
        
        int sumRow = 0;
        for (int j = 0; j < m; ++j){
            sumRow += (int) a[i][j];
        }

        int sumColumn = 0;
        for (int j = 0; j < n; ++j){
            sumColumn += (int) a[j][i];
        }

        // Break Statement
        if (sumColumn != sumRow) {
            match = 0;
            i = runs;
        }
    }

    cout << match;
    return 0;
}