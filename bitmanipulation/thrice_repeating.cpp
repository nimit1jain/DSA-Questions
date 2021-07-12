#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int getbit(int num,int pos)
{
    return ((num&(1<<pos))!=0);
}
int setbit(int num,int pos){
return (num|(1<<pos));
}
void count(int arr[],int n)
{
    int result=0;
    for(int i=0;i<64;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getbit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum%3!=0)
        {
            result=setbit(result,i);
        }
    }
    cout<<result;
}
int main()
{
 int arr[]={1,1,1,2,2,2,3};
 count(arr,7);   
return 0;

}