#include <iostream>
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
    cout << "enter element";
    int element;
    cin >> element;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == element)
        {
            cout << mid;
            break;
        }
        else if (arr[mid] >= low)
        {
            if (element <= arr[mid] && element >= arr[low])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else if (arr[mid] <= high)
        {
            if (element >= arr[mid] && element <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }

    }
        return 0;

}