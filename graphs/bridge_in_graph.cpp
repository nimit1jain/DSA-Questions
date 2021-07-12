#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int N = 10e5;
int detect(int temp, vector<int> &vis, vector<int> vi[],int par,vector<int> edge[])
{
    
        
        vis[temp] = 1;
        

        for (auto it : vi[temp])
        {  
            if (!vis[it])
            {

                int ans = detect(it, vis, vi, temp,edge);
                if (ans == 1)
                    return 1;
            }
            else if (it!=par)
                return 1;
        }
    
    edge[par].push_back(temp);
    return 0;
}

int main()
{
    int v, e;
    cin >> v;
    cin >> e;
    vector<int> vi[v];
    for (int i = 0; i < e; i++)
    {
        int x;
        int y;
        cin >> x;
        cin >> y;
        vi[x].push_back(y);
        vi[y].push_back(x);
    }
   
    vector<int> edge[v];
    vector<int> vis(v, 0);
    for (int i = 0; i < v; i++)
    {
        int ans = detect(0, vis, vi, -1,edge);
       
    }

  for(int i=0;i<=v;i++)
{
    cout<<i<<"->";
    for(int j=0;j<edge[i].size();j++)
    {if(edge[i][j]!=-1)
        cout<<edge[i][j];
    }
    cout<<endl;
}
    return 0;
}