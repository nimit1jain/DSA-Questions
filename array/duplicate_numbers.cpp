#include <iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n, i, j,element=0,count;
    cout << "enter the length of array" << endl;
    cin >> n;
    int arr[n];
    
    cout << "enter the elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max=*max_element(arr,arr+n);
    int brr[max+1];
    for (i = 0; i < (max+1); i++)
    {
        brr[i]=0;
    }
    for(i=0;i<n;i++)
    {

        j=arr[i];
        brr[j]=brr[j]+1;
    }
    for(i=0;i<(max+1);i++)
    {
        if(brr[i]>1)
        {
            count++;
        }
    }
     cout<<"number of duplicate elements are="<<count;
     return 0;
}



// int main()
// {
//     int n, i, j,element=0;
//     cout << "enter the length of array" << endl;
//     cin >> n;
//     int arr[n], brr[n];
//     cout << "enter the elements" << endl;
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (j = 0; j < n; j++)
//     {
//         for (i = 0; i < n; i++)
//         {
//             if (arr[i] = brr[j])
//                 break;
//         }
//         for(int k=i+1;k<n;k++)
//         {

//             if(arr[i]=arr[k])
//             {
//                 brr[element]=arr[i];
//                 element++;
//             }
//         }
//         }
//         }
//     }
// cout<<"number of duplicate elements are="<<element+1;
// return 0;

// }