#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int lb = 0;
    int ub = 1e9;
    cout << "enter the number of stalls " << endl;
    int n;
    cin >> n;
    cout << "enter the position of stalls" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "enter the number of cows" << endl;
    int c;
    cin >> c;
    int ans = 0;
    while (lb <= ub)
    {
        int mid = lb + (ub - lb) / 2;
        int k = 1;
        int prev = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - prev >= mid)
            {
                k++;
                prev = arr[i];
                if (k == c)
                    break;
            }
        }
        if (k == c)
        {
            ans = mid;
            lb = mid + 1;
        }
        else
        {
            ub = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}