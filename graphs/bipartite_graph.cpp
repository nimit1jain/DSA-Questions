#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int f=0;
void dfs(int src,int par,int col,vector<vector<int>> &graph,vector<int> &vis)
{
    vis[src]=col;
    for(auto x:graph[src])
    {
        if(vis[x]==-1)
        dfs(x,src,3-col,graph,vis);
        else if(x!=par&&col==vis[x])
        {
            f=1;break;
        }
    }
}
int main()
{
    int v;
    cin >> v;
    int e;
    cin >> e;
    vector<vector<int>> graph(v);
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int f=0;
    vector<int> vis(v,-1);
    dfs(0,0,1,graph,vis);
    if(f) cout<<"no";
    else cout<<"yes";