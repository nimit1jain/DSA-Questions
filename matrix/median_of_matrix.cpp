#include <iostream>

using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {6, 7, 7}, {7, 8, 9}};
    int low = arr[0][0];
    int high = arr[2][2];
    for (int i = 0; i < 3; i++)
    {
        low = min(low, arr[i][0]);
        high = max(high, arr[i][2]);
    }
    // cout<<low<<endl<<high;
    int median_position = (3 * 3 + 1) / 2;
    int median = low;
    int mid;
    while (low <= high)
    {
    int index = 0;
        mid = low + (high - low) / 2;
        for (int i = 0; i < 3; i++)
        {
            if (mid >= arr[i][2])
            {
                index =index+ 3;
            }
            else if (mid < arr[i][2] && mid > arr[i][0])
            {
                index = index+2;
                
            }
            else if (mid < arr[i][0])
            {
                index = index+0;
            }
            else
                index = index+1;
            
        
        }
        if (index < median_position)
        {
            low = mid + 1;
            median = low;
        }
        else 
        {
            high = mid - 1;
        }
        
    }
    cout << median;

    return 0;
}