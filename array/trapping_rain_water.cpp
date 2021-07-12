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
    int left[n];
    int right[n];
    int max = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        left[i] = max;
    }
    
    int max2 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > max2)
        {
            max2 = arr[i];
        }
        right[i] = max2;
        
    }
    
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        water = water + (min(left[i], right[i]) - arr[i]);
    }
    cout << "water stored is = " << water << endl;
    return 0;
}