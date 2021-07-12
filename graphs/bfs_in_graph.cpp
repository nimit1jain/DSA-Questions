#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int N=10e5;
int main()
{
    int v,e;
    cin>>v;
    cin>>e;
    vector<int> vi[v+1];
    for(int i=0;i<e;i++)
    {
        int x;
        int y;
        cin>>x;
        cin>>y;
        vi[x].push_back(y);
        vi[y].push_back(x);
    }
queue<int> q;
vector<int> vis(N,0);

q.push(1);
vis[1]=1;
while(!q.empty())
{
    int temp=q.front();
    q.pop();
    cout<<temp<<" ";
    for(auto it:vi[temp])
    {
        if(!vis[it])
        {
            vis[it]=1;
            q.push(it);
        }
    }
}
return 0;

}