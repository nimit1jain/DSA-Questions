#include<iostream>
#include<algorithm>
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
    int mid=n/2;
    if(arr[mid]==arr[mid+1])
    {
        cout<<"the majority element is = "<<arr[mid]<<endl;

    }
    else cout<<"no majority element is present";
    
return 0;

}