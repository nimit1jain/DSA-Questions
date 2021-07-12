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
    cout<<"enter the value of k";
    int k;
    cin>>k;
    int good=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            good++;
        }
    }
    cout<<good<<endl;
    int bad=0;
    int j=good-1;
    int ans=INT_MAX;
    int m=0;
    while(j<n){
        bad=0;
    for(int i=m;i<=j;i++)
    {
        if(arr[i]>k)
        {
            bad++;
        }
    }
    cout<<bad<<endl;
    ans=min(bad,ans);
    j++;
    m++;
    }
    cout<<"minimum swaps= "<<ans;
return 0;

}