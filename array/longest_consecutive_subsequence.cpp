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
    sort(arr, arr + n);
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {

        int j = i + 1;
        if (arr[j] - arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count > ans)
        {
            ans = count;
        }
    }
    cout << "the largest subsequence having consecutive numbers is of size= " << ans + 1 << endl;
    return 0;
}