#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        int b;
        cin >> a;
        cin >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++)
    {
        cout<<"{"<<v[i].first<<","<<v[i].second<<"}"<<endl;
    }
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i].second < v[i - 1].first)
        {
                count++;
        }
    }
    cout << count;

    return 0;
}