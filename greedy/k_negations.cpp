#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ncount=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        ncount++;
    }
    int k;
    cin>>k;
    int sum=0;
    if(ncount==0)
    {
        for(int i=0;i<n;i++)
        sum=sum+arr[i];
    }
    else{
        sort(arr,arr+n);
        int i=0;
        while(k--)
        {if(arr[i]<0)
            arr[i]=-arr[i];
            i++;
        }
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[j];
        }
    }
    cout<<sum<<endl;
    
return 0;

}