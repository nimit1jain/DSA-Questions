#include<bits/stdc++.h>
#include<iostream>
using namespace std;

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
for(int i=1;i<=v;i++)
{
    cout<<i<<"->";
    for(int j=0;j<vi[i].size();j++)
    {
        cout<<vi[i][j];
    }
    cout<<endl;
}
return 0;

}