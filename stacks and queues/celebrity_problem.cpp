#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
    cout<<endl;
}
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        st.push(i);
    }
    int celeb=-1;
    while(st.empty())
    {cout<<"ASDCac";
        int a=st.top();
    st.pop();
    int b=st.top();
    st.pop();
    
    if(arr[a][b]==1)
    {
        st.push(b);
        celeb=b;
    }
    else if (arr[b][a]==1)
    {
        st.push(a);
        celeb=a;
    }
}
cout<<celeb<<endl;
return 0;

}