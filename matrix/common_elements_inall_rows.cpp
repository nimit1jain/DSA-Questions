#include<iostream>
#include<map>
using namespace std;
int main()
{cout<<"enter the row and coloumn"<<endl;
    int n, m;
    cin >> n >> m;
int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    map<int , int> mp;
    for(int i=0;i<m;i++)
    {
        mp[arr[0][i]]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mp[arr[i][j]]==i)
            {
                mp[arr[i][j]]++;
                
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        if(mp[arr[0][i]]==n-1)
        cout<<mp[arr[0][i]]<<endl;
    }
    return 0;
}