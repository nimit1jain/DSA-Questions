#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define v 9
int selectminvertex(vector<int> value, vector<int> processed)
{
    int min = INT_MAX;
    int vertex;
    for (int i = 0; i < v; i++)
    {
        if (processed[i] == 0 && value[i] < min)
        {
            vertex = i;
            min = value[i];
        }
    }
    return vertex;
}
void dijkstra(int graph[v][v])
{
    int parent[v];
    vector<int> processed(v, 0);
    vector<int> value(v, INT_MAX);
    value[0] = 0;
    parent[0] = -1;
    for (int i = 0; i < v; i++)
    {
        int u = selectminvertex(value, processed);
        processed[u] = 1;
        for (int j = 0; j < v; j++)
        {
            if (graph[u][j] != 0 && processed[j] == 0 && value[u] != INT_MAX && value[u] + graph[u][j] < value[j])
            {
                value[j] = value[u] + graph[u][j];
                parent[j] = u;
            }
        }
    }
    //    for(int i=0;i<v;i++)
    //    {
    //        cout<<"u->v: "<<parent[i]<<"-> "<<i<<" wt= "<<graph[parent[i]][i]<<endl;
    //    }
    printf("Vertex \t\t Distance from Source\n");
    for (int i = 0; i < v; i++)
        printf("%d \t\t %d\n", i, value[i]);
}
int main()
{
    /* Let us create the example graph discussed above */
    int graph[v][v] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                       {4, 0, 8, 0, 0, 0, 0, 11, 0},
                       {0, 8, 0, 7, 0, 4, 0, 0, 2},
                       {0, 0, 7, 0, 9, 14, 0, 0, 0},
                       {0, 0, 0, 9, 0, 10, 0, 0, 0},
                       {0, 0, 4, 14, 10, 0, 2, 0, 0},
                       {0, 0, 0, 0, 0, 2, 0, 1, 6},
                       {8, 11, 0, 0, 0, 0, 1, 0, 7},
                       {0, 0, 2, 0, 0, 0, 6, 7, 0}};

    dijkstra(graph);

    return 0;
}