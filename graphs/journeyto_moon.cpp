#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 1)
        return 1;
    if (num == 2)
        return 2;
    return (factorial(num - 1) * num);
}
void solve(int temp, vector<int> &vis, vector<int> vi[], int &f)
{

    vis[temp] = 1;
    f++;
    for (auto it : vi[temp])
    {
        if (!vis[it])
        {

            solve(it, vis, vi, f);
        }
    }
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
        vi[y].push_back(x);
    }

    vector<int> vis(v, 0);
    vector<int> component;
    for (int i = 0; i < v; i++)
    {
        if (vis[i]!=1)
        {
            int f = 0;
            solve(0, vis, vi, f);

            component.push_back(f);
        }
    }
    int total = factorial(v) / (factorial(v - 2) * 2);
    cout << total << endl;
    cout<<component.size();
    for (int i = 0; i < 2; i++)
    {
        if (component[i] == 1)
            continue;
        else if (component[i] == 2)
            total = total - 1;
        else
            total = total - (factorial(component[i]) / (factorial(component[i] - 2) * 2));
    }
    cout << total << endl;
    return 0;
}