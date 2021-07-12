#include <iostream>
#include <unordered_map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<int, int> mp;
    int max = 0;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        if (mp[s[i]] > max)
        {
            max = mp[s[i]];
        }
    }
    priority_queue<pair<int,char>,vector<pair<int,char>>> pq;
    for(auto it:mp)
{   pq.push({it.second,it.first});

}
    string ans="";
    ans=ans+pq.top().second;
    pair<int,char> p=pq.top();
    pq.pop();
    pq.push({p.first-1,p.second});

    if (max <= s.size() - max + 1)
    {
        while(!pq.empty())
        {
            if(pq.top().second==ans.back())
            {
                pair<int,char> q=pq.top();
                pq.pop();
                ans=ans+pq.top().second;
                pair<int,char> r=pq.top();
                pq.pop();
                if(r.first-1>0){
                pq.push({r.first-1,r.second});
                }
                pq.push(q);
            }
            else{
                pair<int,char> q=pq.top();
                ans=ans+pq.top().second;
                pq.pop();
                if(q.first-1>0)
                pq.push({q.first-1,q.second});
            }
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}