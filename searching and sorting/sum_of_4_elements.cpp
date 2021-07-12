#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"enter sum number";
    int sum;
    cin>>sum;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)

    {
        for (int j = i + 1; j < n; j++)
         {   int l = j + 1;
        int k = n - 1;
        while (l < k)
        {if(arr[i]+arr[j]+arr[l]+arr[k]==sum)
        {
            cout<<"["<<arr[i]<<","<<arr[j]<<","<<arr[l]<<","<<arr[k]<<"]";
            l++;k--;
        }
        else if(arr[i]+arr[j]+arr[l]+arr[k]>sum)
        {
            k--;
        }
        else
        l++;
        }
    }}
    return 0;
}