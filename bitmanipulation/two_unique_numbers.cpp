#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int setBit(int num,int pos)
{
    return (num&(1<<pos)!=0);
}
void count(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    int tem=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1)
    {
        setbit=xorsum&1;
        pos++;
        xorsum=xorsum>>1;
    }
    int sec=0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos-1))
        {
            sec=sec^arr[i];
        }
    }
    int first=tem^sec;
    cout<<first<<" ";
    cout<<sec<<endl;

}


int main()
{
    int arr[]={1,2,3,1,2,3,4,5};
    count(arr,8);
return 0;

}