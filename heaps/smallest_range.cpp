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
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int high = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        if (arr[i][0] > high)
            high = arr[i][0];
        pq.push({arr[i][0], i});
    }
    vector<int> idx(k, 0);
    // vector index having size k and elements 0
    int low = pq.top().first;
    int range = high - low;
    while (idx[pq.top().second] + 1 < k)
    {
        pair<int, int> f = pq.top();
        if (f.first > high)
            high = f.first;
        pq.pop();
        
            pq.push({arr[f.second][idx[f.second] + 1], f.second});
            int temp=high-pq.top().first;
            if(temp<range)
            {range=temp;
            low=pq.top().first;
            }
        
        idx[f.second]++;
    }
    cout<<"["<<low<<", "<<high<<"]"<<endl;
    return 0;
}