#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve(vector<vector<int>> &arr, int i, int j, int colour, int prev)
{
    if (i >= 3 || i < 0 || j >= 3 || j < 0)
        return;

    else if (arr[i][j] != prev)
        return;
    arr[i][j] = colour;
    solve(arr, i + 1, j, colour, prev);
    solve(arr, i - 1, j, colour, prev);
    solve(arr, i, j + 1, colour, prev);
    solve(arr, i, j - 1, colour, prev);
}
int main()
{
    vector<vector<int>> arr = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    int x = 1, y = 1;
    int prev = arr[x][y];
    int newcolor = 2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    solve(arr, x, y, newcolor, prev);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}