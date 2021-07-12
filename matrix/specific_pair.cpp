#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the row and coloumn"<<endl;
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
// this approach is order of n^4 its of no use

// int max=INT_MIN;
// int high;
// int low;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     {
//         for(int k=(i+1);k<n;k++)
//         {
//             for(int l=(j+1);l<m;l++)
//             {
//                 if(arr[i][j]-arr[k][l]>max)
//                 {
//                     max=arr[i][j]-arr[k][l];
//                     low=arr[i][j];
//                     high=arr[k][l];
//                 }
//             }
//         }
//     }
// }
// cout<<"the specific pair is ("<<low<<","<<high<<")"<<endl;

// return 0;

// }