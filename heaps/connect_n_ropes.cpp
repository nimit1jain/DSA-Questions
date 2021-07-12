#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
    }
    int sum=0;
    while(pq.size()!=1)
    {
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        int k=a+b;
        sum=sum+a+b;
        pq.push(k);
        

    }
    
    cout<<sum;

return 0;

}