#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int N = 10e5;
int detect(int temp, vector<int> &vis, vector<int> vi[], vector<int> &order)
{
    if (vis[temp == 0])

    {
        order[temp] = 1;
        vis[temp] = 1;

        for (auto it : vi[temp])
        {
            if (!vis[it])
            {

                int ans = detect(it, vis, vi, order);
                if (ans == 1)
                    return 1;
            }
            else if (order[temp])
                return 1;
        }
    }
    order[temp] = 0;
    return 0;
}

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
    vector<int> order(N, 0);
    vector<int> vis(N, 0);
    for (int i = 0; i < v; i++)
    {
        int ans = detect(0, vis, vi, order);
        if (ans == 1)
        {
            cout << "yes";
            return 1;
        }
    }

    cout << "no";
    return 0;
}