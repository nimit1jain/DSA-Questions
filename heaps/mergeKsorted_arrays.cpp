#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin >> k;
    int arr[k][k];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> arr[i][j];
        }
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push({arr[i][0], i});
    }
    vector<int> idx(k, 0);
    // vector index having size k and elements 0
    while (!pq.empty())
    {
        pair<int, int> f = pq.top();
        cout<<pq.top().first<<" ";
        pq.pop();
        if (idx[f.second] + 1 < k)
        {
            pq.push({arr[f.second][idx[f.second] + 1], f.second});
        }
        idx[f.second]++;
    }
    return 0;
}