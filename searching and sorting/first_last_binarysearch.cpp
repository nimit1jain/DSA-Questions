#include <iostream>
using namespace std;
// this csn also be done by lower bound and upper bound
int binarysearch(int arr[], int low,int high, int element, int tog)
{
    
    int ans = -1;
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
            ans = mid;
            if (tog == -1)
             {   high = mid +tog;
                binarysearch(arr,low,high,element,tog);}
            else
              {  low = mid + tog;
              binarysearch(arr,low,high,element,tog);
              }
        }
        
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "enter the elemnt you want to find";
    int element;
    cin >> element;
    int idx1 = binarysearch(arr, 0,n-1, element, -1);
    int idx2 = binarysearch(arr, 0,n-1, element, 1);
    if (idx1 == -1)
        cout << "elelemt not  present";
    else
        cout << "index of element is " << idx1 << " " << idx2<<endl;

    return 0;
}