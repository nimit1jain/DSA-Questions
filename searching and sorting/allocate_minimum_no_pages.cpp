#include <iostream>
using namespace std;
// use binary search
// this has some problem make a function for it
int allocation(int arr[], int lb, int ub, int m)
{
    int n = sizeof(arr);

    int mid = lb + (ub - lb) / 2;
    while (lb <= ub)
    {
        int sum = 0;
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            (sum = sum + arr[i]);
            if (arr[i] > mid)
            {
                lb = mid + 1;
                mid=allocation(arr, lb , ub, m);
                return mid;
            }

            else if (sum > mid)
            {
                k++;
                sum = arr[i];

                if (k > m)
                {
                    lb = mid + 1;
                   mid= allocation(arr, lb, ub, m);
return mid;
                    
                }
            }
            else if (k == m && i == n - 1)
            {
                lb = mid + 1;
                mid=allocation(arr, lb, ub, m);
                return mid;
            }
            else if (k != m && i == n - 1)
            {
                ub = mid - 1;
                mid=allocation(arr, lb, ub, m);
                return mid;
            }
        }
    }
    return mid;
}

int main()
{
    cout << "enter number of books" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "enter pages in each book" << endl;
    int totalsum;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalsum = totalsum + arr[i];
    }
    cout << "number of students";
    int m;
    cin >> m;
    int lb = arr[0];
    int ub = totalsum;
    int mid = lb + (ub - lb) / 2;
    cout << allocation(arr, lb, ub, m) << endl;
    return 0;
}

// // this program is only for two students
// int main()
// {
//     cout << "enter number of books" << endl;
//     int n;
//     cin >> n;
//     int arr[n];
//     cout << "enter pages in each book" << endl;
//     int totalsum;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         totalsum = totalsum + arr[i];
//     }
//     int sum1 = 0;
//     int sum2 = 0;
//     int globalmax = -1;
//     int ans = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         sum1 = sum1 + arr[i];
//         sum2 = totalsum - sum1;
//         globalmax = max(sum1, sum2);
//         if (globalmax < ans)
//             ans = globalmax;
//     }
//     cout<<ans<<endl;
//     return 0;
// }