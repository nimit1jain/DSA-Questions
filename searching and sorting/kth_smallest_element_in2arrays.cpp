#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"enter the length of first";
    int n;
    cin>>n;
    cout<<"enter the elements of first";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }cout<<"enter the length of second";
    int m;
    cin>>m;
    cout<<"enter the elements of first";
    int brr[m];
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    sort(arr,arr+n);
    sort(brr,brr+m);
    int j=0;
    for(int i=n-1;i>=0;i++)
    {if(arr[i]>brr[j])
    {
        swap(arr[i],brr[j]);
        j++;

    }
    else break;

    }
    cout<<"enter the smallest element you want to find";
    int k;
    cin>>k;
    if(k>n)
    {
        k=k-n;
        cout<<brr[k-1];
    }
else cout<<arr[k-1];
    
    return 0;

}