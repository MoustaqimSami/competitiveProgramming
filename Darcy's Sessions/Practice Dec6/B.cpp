#include <bits/stdc++.h>
using namespace std;

vector<int> removeZeroes(vector<int> line)
{
    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (line[i] == 0)
            {
                for (int j = i; j < 3; j++)
                {
                    line[j] = line[j + 1];
                }

                line[3] = 0;
            }
        }
    }

    return line;
}

vector<int> solveLine(vector<int> line)
{
    line = removeZeroes(line);
    int current = 0;
    for (int current = 0; current < 3; current++)
    {
        if (line[current] == line[current + 1])
        {
            line[current] *= 2;

            for (int j = current + 1; j < 3; j++)
            {
                line[j] = line[j + 1];
            }

            line[3] = 0;
        }
    }

    return line;
}

int main()
{
    vector<vector<int>> grid(4);
    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < 4; i++)
        {
            int n;
            cin >> n;
            grid[k].push_back(n);
        }
    }

    int movement;
    cin >> movement;

    if (movement == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            grid[i] = solveLine(grid[i]);
        }
    }

    if (movement == 1)
    {
        for (int k = 0; k < 4; k++)
        {
            vector<int> line(4);
            for (int i = 0; i < 4; i++)
            {
                line[i] = grid[i][k];
            }

            line = solveLine(line);

            for (int i = 0; i < 4; i++)
            {
                grid[i][k] = line[i];
            }
        }
    }

    if (movement == 2)
    {
        for (int i = 0; i < 4; i++)
        {
            vector<int> line(4);
            line = grid[i];
            reverse(line.begin(), line.end());

            line = solveLine(line);
            reverse(line.begin(), line.end());
            grid[i] = line;
        }
    }

    if (movement == 3)
    {
        for (int k = 0; k < 4; k++)
        {
            vector<int> line(4);
            for (int i = 0; i < 4; i++)
            {
                line[i] = grid[i][k];
            }

            reverse(line.begin(), line.end());
            line = solveLine(line);
            reverse(line.begin(), line.end());

            for (int i = 0; i < 4; i++)
            {
                grid[i][k] = line[i];
            }
        }
    }

    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << grid[k][i] << " ";
        }
        cout << endl;
    }
}