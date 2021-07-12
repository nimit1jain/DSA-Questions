#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void dfs(int curr,vector<int>g[],vector<bool>&vis)
{
vis[curr]=true;
for(auto it:g[curr])
{
    if(!vis[it])
    dfs(it,g,vis);
}
}
bool connected(vector<int> g[],int v)
{
    vector<bool> vis(v,false);
    int node=-1;
    for(int i=0;i<v;i++){
    if(g[i].size()>0){
    node=i;
    break;}}
    if(node==-1)
    return true;
    dfs(node,g,vis);

    for(int i=0;i<v;i++)
    {
        if(vis[i]==false &&g[i].size()>0)
        {
            return false;
        }
    }
    return true;
}

int finduler(vector<int> g[],int v)
{
    if(!connected(g,v))
    return 0;
    int odd=0;
    int count=0;
    for(int i=0;i<v;i++)
    {
        if(g[i].size()%2!=0)
       { odd=1;
       count++;
       }
       odd=0;
    }
if(count>2)
{
    return 0;
}
else if(odd==2)
return 1;
else return 2;
}



void check(vector<int> g[],int v)
{int ret=finduler(g,v);
if(ret==0)
{
cout<<"not a euler graph";
}
else if(ret==1)
cout<<"semi euler";
else cout<<"euler graph";
}



int main()
{
    int v;
    int e;
    cin>>v>>e;
    vector<int> g[v];
    for(int i=0;i<e;i++)
    {
        int x;
        int y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);

    }
check(g,v);
return 0;

}