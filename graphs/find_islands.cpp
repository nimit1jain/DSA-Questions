#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void dfs(int i, int j, int n, int m, int *arr, int *vis)
{
    if (i < 0 || i > n || j < 0 || j > m)
        return;
    if (*arr[i][j] == 0)
        return;
    if (!vis[i][j])
    {vis[i][j]=1;
        dfs(i + 1, j, n, m, arr, vis);
        dfs(i - 1, j, n, m, arr, vis);
        dfs(i, j + 1, n, m, arr, vis);
        dfs(i, j - 1, n, m, arr, vis);
        dfs(i + 1, j + 1, n, m, arr, vis);
        dfs(i + 1, j - 1, n, m, arr, vis);
        dfs(i - 1, j + 1, n, m, arr, vis);
        dfs(i - 1, j - 1, n, m, arr, vis);
    }
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n][m];
    int vis[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            vis[i][j] = 0;
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] and arr[i][j] == 1)
            {
                dfs(i, j, n, m, (int *)arr, (int *)vis);
                c++;
            }
        }
    }
    cout << c;

    return 0;
}