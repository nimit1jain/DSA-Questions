#include<iostream>
using namespace std;
int paratha(int arr[],int n,int par,int mid)
{
    int time=0;
    int paratha=0;
    for(int i=0;i<n;i++)
{
    time =arr[i];
    int j=2;
    while(time<=mid)
    {
        paratha++;
        time =time+(arr[i]*j);
        j++;
    }
    if(paratha>=par) return 1;
}
return 0;
}
int main()
{
    int par;
    cout<<"enter number of parathas"<<endl;
    cin>>par;
    int n;
    cout<<"enter cooks"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int lb=0;
    int ub=1e8;
    int ans=0;
    while(lb<=ub)
    {
        int mid=lb+(ub-lb)/2;
        if(paratha(arr,n,par,mid))
        {
            ans=mid;
            ub=mid-1;
        }
        else lb=mid+1;
    }
    cout<<ans<<endl;
return 0;

}