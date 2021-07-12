#include <iostream>
using namespace std;
// this approach is of order n2 and now we will discuss n approach
// int main()
// {
//     int n, jumps = 1;
//     cout << "enter the length of array" << endl;
//     cin >> n;
//     int arr[n];
//     int dp[n], i, j, k;
//     cout << "enter the elements" << endl;
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         dp[i] = INT_MAX;
//     }
//     dp[0] = 0;
//     for (i = 0; i < n; i++)
//     // i tk jaane ka minimum way
//     {
//         for (j = 0; j < i; j++)
//         // 0 se i tk kaha se mimimum jump m aa sakte h
//         {
//             if (dp[j] != INT_MAX && arr[j] + j >= i)
//             // j tk aa paa rahe h ya nhi and i tk jaa sakte h ya nahi
//             {
//                 if (dp[j] + 1 < dp[i])
//                 {
//                     dp[i] = dp[j] + 1;
//                 }
//             }
//         }
//     }
//     if(dp[n-1]!=INT_MAX)
//     cout<<"minimum jumps are="<<dp[n-1];
//     else
//     cout<<"we cant reach end";

// }
int minjumps(int arr[], int n)
{
    int maxreach = arr[0];
    int steps = arr[0];
    int jumps = 1;
    if (n == 1)
        return 0;
    else if (arr[0] = 0)
        return -1;
else
{
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
        {
            return jumps;
        }
        maxreach = max(arr[i] + i, maxreach);
        steps--;
        if (steps == 0)
        {
            jumps++;
            {
                if (i > maxreach)
                {
                    return -1;
                }
                steps = maxreach - i;
            }
        }
    }
}