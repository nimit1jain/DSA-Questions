#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int landmines(int **arr, int i, int j, int &counti, int n, int m)
{
    if (arr[i][j] == 0)
        return 0;
    if (i >= n || i < 0 || j >= m || j < 0)
        return 0;
    if (j == m - 1)
        return counti;
    arr[i][j] = 0;counti++;
    landmines(arr, i + 1, j, counti, n, m);
    landmines(arr, i - 1, j, counti, n, m);
    landmines(arr, i, j + 1, counti, n, m);
    landmines(arr, i, j - 1, counti, n, m);
    // count--;
    arr[i][j] = 1;
}
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int **arr = new int *[n];
for(int i=0;i<n;i++)
{
    arr[i]=new int [m];
    for(int j=0;j<m;j++)
    {int k;
    cin>>k;
        arr[i][j]=k;
    }
}
    // arr = {
    //     {1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
    //     {0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    //     {1, 0, 0, 0, 0, 1, 1, 1, 1, 1},
    //     {1, 1, 1, 0, 0, 0, 1, 1, 1, 1},
    //     {1, 1, 1, 1, 0, 0, 1, 1, 1, 1},
    //     {1, 0, 1, 1, 0, 0, 0, 1, 0, 1},
    //     {0, 0, 0, 1, 1, 0, 1, 0, 0, 0},
    //     {1, 0, 1, 1, 1, 1, 1, 1, 0, 1},
    //     {0, 1, 1, 1, 1, 0, 1, 1, 1, 1},
    //     {0, 0, 1, 1, 0, 0, 0, 1, 1, 1},
    //     {0, 1, 1, 0, 1, 0, 1, 1, 1, 1},
    //     {1, 1, 0, 0, 0, 1, 1, 1, 1, 1}};
int min=INT_MAX;
for(int i=0;i<n;i++)
{   
    if(arr[0][i]==1)
   {int counti= landmines(arr,0,i,counti,n,m);
    if(counti<min)
    min=counti;
   }
}
    cout<<min;

    return 0;
}