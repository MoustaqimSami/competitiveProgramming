#include <bits/stdc++.h>
using namespace std;

bool posCheck(vector<vector<int>> board, int a, int b)
{
    for (int c = 0; c < 8; c++)
    {
        if (c == b)
            continue;
        board[a][c] += 1;
    }

    for (int r = 0; r < 8; r++)
    {
        if (r == a)
            continue;
        board[r][b] += 1;
    }

    for (int r = a - 1, c = b - 1; r >= 0 && c >= 0; r--, c--)
        board[r][c] += 1;
    for (int r = a + 1, c = b + 1; r < 8 && c < 8; r++, c++)
        board[r][c] += 1;

    for (int r = a - 1, c = b + 1; r >= 0 && c < 8; r--, c++)
        board[r][c] += 1;
    for (int r = a + 1, c = b - 1; r < 8 && c >= 0; r++, c--)
        board[r][c] += 1;

    for (int r = 0; r < 8; r++)
    {
        for (int c = 0; c < 8; c++)
        {
            if (board[r][c] > 1)
                return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> board(8, vector<int>(8, 0));
    int queens = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char ch;
            cin >> ch;
            if (ch == '*')
            {
                board[i][j] = 1;
                queens++;
            }
        }
    }

    bool fail = (queens != 8);

    for (int i = 0; i < 8 && !fail; i++)
    {
        for (int j = 0; j < 8 && !fail; j++)
        {
            if (board[i][j] == 1)
            {
                if (posCheck(board, i, j))
                    fail = true;
            }
        }
    }

    cout << (fail ? "invalid" : "valid") << "\n";
    return 0;
}
