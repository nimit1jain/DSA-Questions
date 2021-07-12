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
    cout<<"enter the value of X ";
    int x;
    cin>>x;
    int i=0;int j=0;
    int mind=INT_MAX;
    int sum=0;
    while(i<=j&&j<n)
    {
        while(sum<=x&&j<n){
        sum=sum+arr[j++];
    }
    while(sum>x&&i<j){
        mind=min(mind,j-i);
        sum=sum-arr[i];
        i++;
    }

    }
    cout<<mind<<endl;
return 0;

}