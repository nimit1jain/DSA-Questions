#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<pair<int,int>> p;
    for(int i=0;i<s.size();i++)
    {
        p.push_back({(int) s[i]-48,i});
    }
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(p[i].second!=i)
        {
            swap(p[p[i].second],p[i]);
            c++;
        }
    }
    cout<<c;

return 0;

}