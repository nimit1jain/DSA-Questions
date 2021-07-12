#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;int arr[n];
 int sum=0;
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
sum=sum+arr[i];
 }   
 int halfsum=sum/2;
 int cursum=0;
 sort(arr,arr+n,greater<int>());
 int ans=0;
 for(int i=0;i<n;i++)
 {
cursum=cursum+arr[i];
ans++;
if(cursum>halfsum)
{
    cout<<ans;
    break;
}

 }
 
return 0;

}