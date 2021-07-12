#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#include<stack>
using namespace std;

int main()
{queue<int> q;
stack<int>st;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    st.push(arr[i]);
}
int brr[n];
brr[0]=-1;
int min=arr[n-1];
st.pop();
int prev;
int tops;
for(int i=1;i<n;i++)
{   prev=tops;
    tops=st.top();
    if(tops<min){
        min=tops;
        brr[i]=-1;

    }
    else if(tops>min&&tops>prev)
    {
brr[i]=prev;
    }
    else if(tops>min&&tops<prev)
    {
brr[i]=min;
    }

    st.pop();
   


}
for(int i=n-1;i>=0;i--)
{
    cout<<brr[i]<<" ";
}

    
return 0;

}