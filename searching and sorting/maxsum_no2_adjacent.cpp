#include <iostream>
#include <algorithm>
#include <bits\stdc++.h>
using namespace std;
int dp[10001];
int answer(int arr[], int i)

{
    if (i < -1)
    {
        return 0;
    }
    if (dp[i] != -1)
        return (dp[i]);

    int take = answer(arr, i - 2) + arr[i];
    int leave = answer(arr, i - 1);

    return dp[i] = max(take, leave);
}
int main()
{
    int n;
    cin >> n;
    dp[n];
    memset(dp, -1, sizeof(dp));
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<answer(arr, n - 1);
    return 0;
}