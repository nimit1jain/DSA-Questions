#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> s1;
vector<int> s2;

void sumit(int brr[],int bi)
{int sum=0;
    for(int i=0;i<=bi;i++)
    { sum=sum+brr[i];
        s1.push_back(sum);
    }
}
int subsequences(int arr[],int brr[],int n,int bi,int ai)
{if(ai==n)
{cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<brr[i]<<" ";
        return 0;
    }
    
}
subsequences(arr,brr,n,bi,ai+1);
brr[bi]=arr[ai];
subsequences(arr,brr,n,bi+1,ai+1);
}





int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the range"<<endl;
    int a,b;
    cin>>a>>b;
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a&&arr[i]<=b)
        {
            count++;
        }
    }
    int brr[n];
    subsequences(arr,brr,n,0,0);



return 0;

}