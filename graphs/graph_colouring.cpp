#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int v;
    cin >> v;
    int e;
    cin >> e;
    vector<int> graph[v];
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int colour[v];
    bool available[v];
    colour[0] = 1;


    for (int i = 1; i < v; i++)
        colour[i] = -1;
    for (int i = 0; i < v; i++)
        available[i] = false;
    int ans = 0;



    for (int i = 1; i < v; i++)
    {
        for (auto it : graph[i])
        {
            if (colour[it] != -1)
                available[colour[it]] = true;
        }


        int cr;
        for (cr = 0; cr < v; cr++)
        {
            if (available[cr] == false)
                break;
        }

        colour[i] = cr;
        ans = max(ans, cr + 1);


        for (auto it : graph[i])
        {
            if (colour[it] != -1)
                available[colour[it]] = false;
        }
    }
    cout << ans;

    return 0;
}