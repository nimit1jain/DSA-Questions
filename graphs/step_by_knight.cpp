#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "enter the grid number" << endl;
    int n;
    cin >> n;
    cout << "enter knights position" << endl;
    int posx;
    cin >> posx;
    int posy;
    cin >> posy;
    int tx;
    cout << "enter target position" << endl;
    cin >> tx;
    int ty;
    cin >> ty;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=0;
        }
    }
queue<pair<int,int>> q;
q.push({posx,posy});
while(!q.empty())
{
        int i=q.front().first;
    int j=q.front().second;
    if(i==tx&&j==ty)
    {cout<<arr[i][j];
    break;}
    q.pop();
    if(i+2<n&&i+2>=0&&j+1>=0&&j+1<n&&arr[i+2][j+1]==0)
    {
        arr[i+2][j+1]=1+arr[i][j];
        q.push(make_pair(i+2,j+1));
    }
    if(i+2<n&&i+2>=0&&j-1>=0&&j-1<n&&arr[i+2][j-1]==0)
    {
        arr[i+2][j-1]=1+arr[i][j];
        q.push(make_pair(i+2,j-1));
    }
    if(i+1<n&&i+1>=0&&j-2>=0&&j-2<n&&arr[i+1][j-2]==0)
    {
        arr[i+1][j-2]=1+arr[i][j];
        q.push(make_pair(i+1,j-2));
    }
    if(i+1<n&&i+1>=0&&j+2>=0&&j+2<n&&arr[i+1][j+2]==0)
    {
        arr[i+1][j+2]=1+arr[i][j];
        q.push(make_pair(i+1,j+2));
    }
    if(i-2<n&&i-2>=0&&j-1>=0&&j-1<n&&arr[i-2][j-1]==0)
    {
        arr[i-2][j-1]=1+arr[i][j];
        q.push(make_pair(i-2,j-1));
    }
    if(i-2<n&&i-2>=0&&j+1>=0&&j+1<n&&arr[i-2][j+1]==0)
    {
        arr[i-2][j+1]=1+arr[i][j];
        q.push(make_pair(i-2,j+1));
    }
    if(i-1<n&&i-1>=0&&j+2>=0&&j+2<n&&arr[i-1][j+2]==0)
    {
        arr[i-1][j+2]=1+arr[i][j];
        q.push(make_pair(i-1,j+2));
    }
    if(i-1<n&&i-1>=0&&j-2>=0&&j-2<n&&arr[i-1][j-2]==0)
    {
        arr[i-1][j-2]=1+arr[i][j];
        q.push(make_pair(i-1,j-2));
    }
}

return 0;
}