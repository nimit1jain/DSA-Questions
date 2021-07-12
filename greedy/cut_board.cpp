#include<iostream>
#include<bits/stdc++.h>
using namespace std;















int main()
{
    int coloumn;
    cin>>coloumn;
int arr[coloumn];
for (int i=0;i<coloumn;i++)
{
    cin>>arr[i];
}
int row;
cin>>row;
int brr[row];
for(int i=0;i<row;i++)
{
    cin>>brr[i];
}
sort(arr,arr+coloumn);
sort(brr,brr+row);
reverse(arr,arr+coloumn);
reverse(brr,brr+row);

int hz=1;
int vr=1;
int i=0;int j=0;
int cost=0;
while(i<coloumn&&j<row)
{
    if(arr[i]>brr[j])
    {
        cost=cost+arr[i]*hz;
        vr++;
        i++;
    }
    else
    {
        cost=cost+brr[j]*vr;
        hz++;
        j++;
    }

}
while(j<row)
{
    cost=cost+brr[j]*vr;
    hz++;
    j++;
}
while(i<coloumn)
{
    cost=cost+arr[i]*hz;
    vr++;
    i++;
}
cout<<cost<<endl;

return 0;

}