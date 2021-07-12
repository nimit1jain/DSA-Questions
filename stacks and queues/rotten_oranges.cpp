#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<pair<int, int>> q;
    int grid[3][3] = {{0, 1, 2},
                      {0, 1, 2},
                      {2, 1, 1}};
    int fresh = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({i, j});
            }
            else if (grid[i][j] == 1)
            {
                fresh++;
            }
        }
    }
    int t = 0;
    while (!q.empty())
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if (x > 0 && grid[x - 1][y] == 1)
            {
                q.push({x - 1, y});
                grid[x - 1][y] = 2;
                fresh--;
            }
            if (x < 2 && grid[x + 1][y] == 1)
            {
                q.push({x + 1, y});
                grid[x + 1][y] = 2;
                fresh--;
            }
            if (y > 0 && grid[x][y - 1] == 1)
            {
                q.push({x, y - 1});
                grid[x][y - 1] = 2;
                fresh--;
            }
            if (y < 2 && grid[x][y + 1] == 1)
            {
                q.push({x, y + 1});
                grid[x][y + 1] = 2;
                fresh--;
            }
        }

        if (!q.empty())
        {
            t++;
        }
    }
    if (fresh == 0)
    {
        cout << "time taken to rott oranges is " << t << endl;
    }
    else
        cout << "you cant rott oranges" << endl;

    return 0;
}