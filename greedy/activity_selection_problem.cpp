#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> v;
    for(int i=0;i<6;i++)
    {int a;
    int b;
    cin>>a;
    cin>>b;
        v.push_back({a,b});
    }
    int take =1;
    int prev=0;
    for(int i=1;i<6;i++)
    {
        if(v[i].first>v[prev].second)
        {take++;
            prev=i;
        }
    }
    cout<<take<<endl;

return 0;

}