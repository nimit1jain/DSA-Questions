#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int xorsum(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int main()
{
    int arr[]={1,2,3,1,2,3,7};
    cout<<xorsum(arr,7);
return 0;

}