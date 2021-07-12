#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int arr[]={2000,500,200,100,50,20,10,5,2,1};
int num;
cin>>num;
int i=0;
int count=0;
for(i=0;i<10;i++)
{
if(num>arr[i])
{
    num=num%arr[i];
    count++;
    i--;
}
}
    cout<<count<<endl;
return 0;

}