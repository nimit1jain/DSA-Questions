#include <iostream>
#include <bits\stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int a;
    int b;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[abs(arr[i]) - 1] < 0)
        {
            a = abs(arr[i]);
        }
        else
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            b = i + 1;
            break;
        }
    }
    cout << "repeating = " << a << "missing = " << b << endl;
    return 0;
}
// this is not of order of n bcoz of lower bound function
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(lower_bound(arr,arr+n,arr[i])-arr!=upper_bound(arr,arr+n,arr[i])-arr-1)
//         {
//             cout<<arr[i]<<endl;
//             break;
//         }
//     }

//     for(int i=1;i<=n;i++)
//     {
// if(lower_bound(arr,arr+n,i)-arr==n)
// {
//     cout<<"missing number is = "<<i<<endl;
//     break;
// }
//     }
// return 0;

// }