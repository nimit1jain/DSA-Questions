#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<pair<int, int>> v;
    for (int i = 0; i<n; i++)
    {
        v.push_back({arr[i], i + 1});
    }
    sort(v.begin(), v.end());
    int amount;
    cin >> amount;
    int stocks = 0;
    for (int i = 0; i < n; i++)
    {
        if (amount / v[i].first >= v[i].second)
        {
            stocks = stocks + v[i].second;
            amount = amount - v[i].second * v[i].first;
        }
        else if (amount / v[i].first < v[i].second)
        {
            stocks = stocks + (amount / v[i].first);
            break;
        }
    }
    cout << stocks << endl;

    return 0;
}