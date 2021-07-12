#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int temp = 0;
void check(vector<vector<int>> &g, int tm, int i, int j, int x, int y)
{
    if (i > x || i < 0 || j > y || j < 0)
        return;
    if (g[i][j] != 0)
        return;
    g[i][j] = temp++;

    if (i == tm || j == tm)
    {

        return;
    }

    check(g, tm, x, j, x, y);
    check(g, tm, i, y, x, y);

    check(g, tm, 0, j, x, y);
    check(g, tm, i, 0, x, y);

    check(g, tm, x, j - x + i, x, y);

    check(g, tm, i + j, 0, x, y);

    check(g, tm, i - y + j, y, x, y);
    check(g, tm, 0, j + i, x, y);
}

int main()
{
    int x;
    int y;
    cin >> x >> y;
    int n = max(x, y) ;
    vector<vector<int>> g(n+1,vector<int>(n+1,0));
    
    
    int tm;
    cin >> tm;
check(g,tm,0,0,x,y);

 for (int i = 0; i < g.size(); i++)
    {
        for(int j=0;j<g[i].size();j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;

    }

    return 0;
}