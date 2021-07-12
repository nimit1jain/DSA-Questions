#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int timer=1;
void dfs(int src,int par,vector<int> g[],vector<int> &intime,vector<int> &outtime)
{
    intime[src]=timer++;
    for(auto x:  g[src])
    {
        if(x!=par)
        dfs(x,src,g,intime,outtime);
    }
    outtime[src]=timer++;
}
int check(vector<int> intime,vector<int>outtime,int x,int y)
{
    if(intime[x]<intime[y]&&outtime[x]>outtime[y])
    return 1;
    else if(intime[y]<intime[x]&&outtime[y]>outtime[x])
    return 1;
    else return 0;
}

int main()
{
    int n;
    cin>>n;

    vector<int> g[n+1];
    for(int i=0;i<n-1;i++)
    {
        int x;
        int y;

        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector<int>intime(n+1,0);
    vector<int>outtime(n+1,0);
    dfs(1,0,g,intime,outtime);
    
    int pp;
    cin>>pp;
    int x;int y;
    cin>>x>>y;
    int type=check(intime,outtime,x,y);
    if(type==0)
    {
        cout<<"cant reach";
        return 0;
    }
    if(pp==0)
    {
        if(intime[x]<intime[y])
        cout<<"can reach";
        else cout<<"cant reach";
    }
    if(pp==1)
    {
        if(intime[y]<intime[x])
        cout<<"can reach";
        else cout<<"cant reach";
    }
    
return 0;

}