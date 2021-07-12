#include <iostream>
#include <algorithm>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n, idx;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i - 1] < arr[i])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
        for (int i = n - 1; i >= 0; i--)
            cout << arr[i];
    else
    {
        int prev = idx;
        for (int j = idx + 1; j < n; j++)
        {
            if (arr[idx - 1] < arr[j] && arr[j] <= arr[prev])
            {
                prev = j;
            }
        }

        swap(arr[idx - 1], arr[prev]);
    }
    reverse(arr[idx],arr[n]); 
    // heremake the reverse function by self and the code will work
    for(int i=0;i<n;i++)
    cout<<arr[i];
    return 0;
}