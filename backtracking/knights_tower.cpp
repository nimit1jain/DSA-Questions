#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void display(int ** arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void solve(int ** arr,int r, int c,int move,int n)
{
    if(r>=n||c>=n||r<0||c<0||arr[r][c]>0)
    {
        return ;
    }
    else if(move==n*n)
    {
        arr[r][c]=move;
        display(arr,n);
        arr[r][c]=0;
        return;
    }
    arr[r][c]=move;
    solve(arr,r-2,c+1,move+1,n);
    solve(arr,r-1,c+2,move+1,n);
    solve(arr,r+1,c+2,move+1,n);
    solve(arr,r+2,c+1,move+1,n);
    solve(arr,r+2,c-1,move+1,n);
    solve(arr,r+1,c-2,move+1,n);
    solve(arr,r-1,c-2,move+1,n);
    solve(arr,r-2,c-1,move+1,n);
    arr[r][c]=0;
}
int main()
{int n;
cin>>n;
    int  r;int c;
    cin>>r>>c;
     int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            arr[i][j] = 0;
    }
    solve(arr,r,c,1,n);
return 0;

}