#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    queue<char> q;
    string t="";



    for(int i=0;i<s.length();i++)
    {
        if(mp[s[i]]==0)
        {
            q.push(s[i]);
            t=t+s[i];
            mp[s[i]]++;
        }
        else 
        {
            q.pop();
            t=t+'#';
        }
    }
    char top=q.front();
    cout<<"first non repeating element is ="<<top<<endl;


return 0;

}