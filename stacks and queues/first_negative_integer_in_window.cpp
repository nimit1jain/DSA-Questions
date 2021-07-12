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
    cout<<"enter the window size"<<endl;
    int k;
    cin>>k;
    int i=0;
    int m=k;
    int j=0;
    int l=0;
    while(i<n)
    {
        while(j<m)
        {
            if(arr[j]<0)
            {
                cout<<arr[j]<<" ";
                break;
            }
            j++;
        }
        j=m;
        m=m+k;
        i++;


    }

return 0;

}   