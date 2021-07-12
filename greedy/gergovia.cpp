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
stack<pair<int,int>> stp;
stack<pair<int,int>> stn;
for(int i=0;i<n;i++)
{
    if(arr[i]>0)
    {
        stp.push({arr[i],i});
    }
    else stn.push({arr[i],i});
}
int tax=0;

while(!stp.empty()&&!stn.empty())
{
    int a=stp.top().first;
    int b=stn.top().first;
    int c=stp.top().second;
    int d=stn.top().second;
    if(a<abs(b))
    {
        tax=tax+a*abs(c-d);
        stn.pop();
        stp.pop();
        stn.push({-(abs(b)-a),d});
        
    }
    else if(a>abs(b))
    {
        tax=tax+abs(b)*abs(c-d);
        stn.pop();
        stp.pop();
        stp.push({a-abs(b),c});
    }
    else{
        stp.pop();
        stn.pop();
        tax=tax+a*abs(c-d);
    }
}
cout<<tax<<endl;
return 0;

}