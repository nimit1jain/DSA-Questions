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
    int product=1;
    int ans=INT_MIN;
    int i=n-1;
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==0)
        {
            continue;
        }
        else if(arr[i]<0)
        {
            break;
        }
        else{
        product=product*arr[i];
        ans=max(ans,product);
        }
    }
    for(int j=0;j<=i;j++)
    {
        product=product*arr[j];
        ans=max(ans,product);
    }

    cout<<ans<<endl;
return 0;

}