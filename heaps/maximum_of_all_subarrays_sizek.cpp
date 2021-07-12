#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push({arr[i], i});
    }
    cout<<pq.top().first<<" ";
    for (int i = k; i < n; i++)
    {
        while (!pq.empty() && pq.top().second <= i - k)
        {
            pq.pop();
        }
        pq.push({arr[i], i});
        cout<<pq.top().first<<" ";

    }
    return 0;
}