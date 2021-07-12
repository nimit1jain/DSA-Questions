#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> g;
        for(auto x:flights)
        {
            g[x[0]].push_back({x[1],x[2]});
        }
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int> >> pq;
        pq.push(make_tuple(0,src,0));
        while(!pq.empty()){
        auto[cost,u,stops]=pq.top();
         pq.pop();
            if(u==dst)
                return cost;
            if(stops>k)
                continue;
            for(auto child:g[u])
            {
                auto[v,w]=child;
                pq.push(make_tuple(cost+w,v,stops+1));
            }
            
            
        }
        return -1;
    }
};