#include <iostream>
#include <algorithm>
using namespace std;
int binarysearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (element < arr[mid])
        {
            high = mid - 1;
        }
        else if (element > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
           return mid;
        }
       
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the maximum difference you want ";
    int max;
    cin >> max;
    int index;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int k=max+arr[i];
        
        index=binarysearch(arr,n,k);
        
        if(index!=-1)
        {
            cout<<arr[i]<<" "<<arr[index];
            break;
        }
    }
    return 0;
}