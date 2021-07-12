#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void dfs(vector<int> vi[],vector<int> &vis,int temp)
{   vis[temp]=1;
    for(auto x:vi[temp])
    {
        if(!vis[x])
         dfs(vi,vis,x);
    }

}
int main()
{
    int v,e;
    cout<<"enter the vertices number";
    cin>>v;
    cout<<"enter the number of edges present";
    cin>>e;
    vector<int> vi[v];
    for(int i=0;i<e;i++)
    {
        int x;
        int y;
        cin>>x;
        cin>>y;
        vi[x].push_back(y);
        vi[y].push_back(x);
    }
    if(e<v-1)
    {
        cout<<"the nodes cannot be connected";
        return 0;
    }
    vector<int> vis(v,0);
    int c=0;
    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {c++;
            dfs(vi,vis,i);
        }
    }
    cout<<c-1<<"edges will be replaced"<<endl;
    return 0;
}

