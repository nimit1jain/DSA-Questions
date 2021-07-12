#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=3;
    int wg;
    cin >> wg;
    int w[3]={10,20,30};
    int v[3]={60,100,120};
    
    unordered_map<int, int> mp;
    priority_queue<int, vector<int>> pq;
    for (int i = 0; i < n; i++)
    {
        mp[v[i] / w[i]] = w[i];
        pq.push(v[i] / w[i]);
    }

    int rem = wg;
    int sum = 0;
    while(wg)
    {
        if (mp[pq.top()] < wg)
        {
            sum = sum + pq.top() * mp[pq.top()];
            wg=wg- mp[pq.top()];
            pq.pop();
        }
        else
        {
            sum = sum + wg * pq.top();
            wg=0;
            pq.pop();
            
        }
    }
    cout << sum << endl;
    return 0;
}