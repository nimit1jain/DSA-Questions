#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the number of chocolate packets"<<endl;
    int n;
    cin>>n;
    cout<<"enter the chocolates in oackets"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number of students"<<endl;
    int m;
    cin>>m;
    int i=0;
    int k=INT_MAX;
    int low=-1;
    while(i+m-1<n)
    {
        int mindiff =arr[i+m-1]-arr[i];
        if(mindiff<k)
        {
            k=mindiff;
            low=i;
        }
 i++;       
    }
    for(int j=low;j<low+m;j++)
    {
        cout<<arr[j]<<" ";
    }
return 0;

}