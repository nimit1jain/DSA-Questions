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
    sort(arr,arr+n);
    int left=0;
    int i=0;
    for( i=0;i<n/2;i++)
    {
        left=left+arr[i];
    }
    int right=0;
    for(int j=i;j<n;j++)
    {
        right=right+arr[j];
    }
    int k=n/2;
    while(k<n||k>=0)
    {
     if(left>right)
     {int sq=arr[k];
         k--;
         left=left-sq;
         right=right+sq;
     }   
     else if(left<right)
     {int sq=arr[k];
         k++;
         left=left+sq;
         right=right-sq;
     }
     else break;
    }
cout<<left<<" "<<right;
return 0;

}