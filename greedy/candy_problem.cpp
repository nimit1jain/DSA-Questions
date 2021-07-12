#include<iostream>
#include<bits/stdc++.h>
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
    sort(arr,arr+n);
    int k;
    cin>>k;
    int m=n/k;
    int mini=0;
    int maxi=0;
    if(k>=n-1)
    {
        mini=arr[0];
        maxi=arr[n-1];
    }
    else
    {
        for(int i=0;i<(n-m*k);i++)
        {
            mini=mini+arr[i];
        }
        for(int i=n-1;i>=(m*k);i--)
        {
            maxi=maxi+arr[i];
        }
    }
    cout<<mini<<" "<<maxi<<endl;


return 0;

}