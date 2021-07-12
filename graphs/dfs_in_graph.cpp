#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int N = 10e5;
void solve(int temp, vector<int> &vis, vector<int> vi[])
    {

        vis[temp] = 1;
        cout << temp << " ";
        for (auto it : vi[temp])
        {
            if (!vis[it])
            {

                solve(it, vis, vi);
            }
        }
    
    }
int main()
{
    int v, e;
    cin >> v;
    cin >> e;
    vector<int> vi[v + 1];
    for (int i = 0; i < e; i++)
    {
        int x;
        int y;
        cin >> x;
        cin >> y;
        vi[x].push_back(y);
        vi[y].push_back(x);
    }

    vector<int> vis(N, 0);
    solve(0,vis,vi);
    return 0;
}