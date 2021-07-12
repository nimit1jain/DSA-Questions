#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void dfs(int src,vector<vector<int>> &g1,vector<int> &vis,string &ans)
{
    vis[src]=1;
    for(auto x:g1[src])
    {
        if(!vis[x])
        {
            dfs(x,g1,vis,ans);
        }
    }
    char ch=src+'a';
    ans=ch+ans;
}
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<vector<int>> g1;
    for(int i=0;i<n-1;i++)
    {
        string w1=v[i];
        string w2=v[i+1];
        for(int j=0;j<min(w1.length(),w2.length());j++)
        {
            if(w1[j]!=w2[j])
            {
                g1[w1[j]-'a'].push_back(w2[j]-'a');
                break;
            }
        }
    }
    vector<int> vis(k,0);
    string ans="";
    for(int i=0;i<k;i++)
    {
        if(!vis[i])
        dfs(i,g1,vis,ans);
    }
    cout<<ans;

    return 0;
}