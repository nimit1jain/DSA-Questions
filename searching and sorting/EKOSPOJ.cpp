#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cout << "enterthe number of trees=" << endl;
    int n;
    cin >> n;
    cout << "enter the heights of trees" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the amount of wood you want" << endl;
    int k;
    cin >> k;
    int lb = 0;
    int ub = *max_element(arr, arr + n);
    int ans = 0;
    while (lb <= ub)
    {
        int mid = lb + (ub - lb) / 2;
        int chop = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= mid)
                chop = chop + (arr[i] - mid);
        }
        if (chop < k)
        {
            ub = mid - 1;
        }
        else
        {
            ans = mid;
            lb = mid + 1;
        }
    }
    cout << ans;
    return 0;
}