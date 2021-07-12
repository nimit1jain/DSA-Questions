#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(string s,int k)
{
    vector<int> v;
    map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        v.push_back(mp[s[i]]);
        mp[s[i]]--;
    }
    sort(v.begin(),v.end());
    
    while(k--)
    {
        v.pop_back();
        
    }int sum=v[0]*v[0];
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]!=v[i+1])
        {
            sum=sum+v[i+1]*v[i+1];
        }
    }
    return sum;
}
int main()
{string s;
cin>>s;
int sum=solve(s,3);
cout<<sum;
    
return 0;

}