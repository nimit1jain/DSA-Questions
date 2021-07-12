#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// for finding k smallest elements but for k largest elements use maxheap;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
int arr[]={12, 5, 787, 1, 23};
int k=2;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
{
    pq.push(arr[i]);
}
int i=1;
while(!pq.empty()&&i<=k)
{
cout<<pq.top()<<" ";
pq.pop();
i++;
}
return 0;

}