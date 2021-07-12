#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> v;
    for(int i=0;i<5;i++)
    {
        int a;
        int b;
        cin>>a;
        cin>>b;
        v.push_back({a,b});

    }
sort(v.begin(),v.end(),greater<pair<int,int>>());
int arr[v.size()];
int sum=0;

for(int i=0;i<v.size();i++)
{
    if(arr[v[i].second-1]!=1)
    {
        sum=sum+v[i].first;
        arr[v[i].second-1]=1;
    }
    else{
        while(v[i].second-1>=0)
        {   v[i].second--;
            if(arr[v[i].second]-1!=1)
            {
                arr[v[i].second-1]=1;
                sum=max(v[i].first,sum);
                
                break;
            }
        }
    }
}
int count=0;
for(int i=0;i<v.size();i++)
{
    if(arr[i]==1)
    {
        count++;
    }
}
cout<<count<<" "<<sum;
return 0;

}