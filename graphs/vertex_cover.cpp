#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// void solve(vector<int> g,map<int,int> &mp,int par,int temp)
// {
//     mp[temp]=par;
//     for(auto x: g[temp])
//     {
//         if(mp[temp]==0)
//         {
//             solve(g,mp,temp,x);
//         }
//     }
// }
void printVertexCover(int v,vector<int> g[])
{
    // Initialize all vertices as not visited.
    bool visited[v];
    for (int i=0; i<v; i++)
        visited[i] = false;
 
    list<int>::iterator i;
 
    // Consider all edges one by one
    for (int u=0; u<v; u++)
    {
        // An edge is only picked when both visited[u] and visited[v]
        // are false
        if (visited[u] == false)
        {
            // Go through all adjacents of u and pick the first not
            // yet visited vertex (We are basically picking an edge
            // (u, v) from remaining edges.
            for (auto v:g[u])
            {
                
                if (visited[v] == false)
                {
                     // Add the vertices (u, v) to the result set.
                     // We make the vertex u and v visited so that
                     // all edges from/to them would be ignored
                     visited[v] = true;
                     visited[u]  = true;
                     break;
                }
            }
        }
    }
 
    // Print the vertex cover
    for (int i=0; i<v; i++)
        if (visited[i])
          cout << i << " ";
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
    printVertexCover(v,g);

return 0;

}