#include <iostream>
#include <bits\stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<string, vector<string>> m;
    for (int i = 0; i < n; i++)
    {
        string s = v[i];
        sort(s.begin(), s.end());
        m[s].push_back(v[i]);
    }
    for (auto it : m)
    {    auto x = it.second;
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}