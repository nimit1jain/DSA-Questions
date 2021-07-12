#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution
{ public:
vector<int> topo(int v,vector<int>vi[])
{
    vector<int> in(v,0);
    vector<int> ans;
    queue<int>q;
    for(int i=0;i<v;i++)
    {
        for(auto it:vi[i])
        {
            in[it]++;
        }
    }
    for(int i=0;i<v;i++)
    {
        if(in[i]==0)
        q.push(i);
    }
    while(!q.empty())
    {
        int td=q.front();
        q.pop();
        ans.push_back(td);
        for(auto it:vi[td]){
            in[it]--;
            if(in[it]==0)
            q.push(it);
        }
    }
    return ans;
}



};
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
    }
    for (int i = 0; i < v; i++)
    {
        cout << i << "->";
        for (int j = 0; j < vi[i].size(); j++)
        {
            cout << vi[i][j];
        }
        cout << endl;
    }
    vector<int> ans[v-1];
    map<int,int> mp;
    for(int i=0;i<v;i++)
    {
        mp[i]=0;
    }
    for(int i=0;i<v;i++)
    {
        for(auto it:vi[i])
        {
            mp[it]++;
        }
    }
    for(int i=0;i<v;i++)
    {
        ans[mp[i]].push_back(i);
    }
    for(int i=0;i<v-1;i++)
    {
        for(auto it:ans[i])
        cout<<it<<" ";
    }
return 0;
}