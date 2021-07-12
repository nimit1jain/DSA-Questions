#include <iostream>
#include <algorithm>
using namespace std;
int common2array(int arr[], int brr[], int n, int m)
{
    int l = 0;
    int k = 111111;
    int i, j;

    int crr[m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i] == brr[j] && arr[i] != k)
            {
                crr[l] = arr[i];
                k = arr[i];
                l++;
            }
        }
    }
    for (i = 0; i < m; i++)
        cout << crr[i] << endl;
    return 0;
}
int main()
{
    int arr[7] = {1, 2, 3, 5, 2, 4, 8};
    int brr[5] = {1, 5, 8, 3, 9};

    common2array(arr, brr, 7, 5);
    return 0;
}