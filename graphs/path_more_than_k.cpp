#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(int src,int  k,vector<pair<int,int>> g,vector<bool> &vis)
{
   vis[src]=true;
   if(k<=0) return true;
   for(auto x: g[src])
   {
       int u=x.first;
       int v=x.second;
       if(vis[u]==true)
       continue;
       if(w>=k)
       return true;
       if(solve(u,k-w,g,vis))
       return true;
   }
   vis[src]=false;
   return false;

}

int main()
{
    int v;
    cin>>v;
    int e;
    cin>>e;
    vector<pair<int,int>> g[v+1];
    for(int i=0;i<e;i++)
    {
        int x;
        int y;
        int w;
        cin>>x>>y>>w;
        g[x].push_back({y,w});
        g[y].push_back({x,w});
    }
    vector<bool> vis(v+1,false);
    cout<<solve(1,k,g,vis);
return 0;

}