#include <iostream>
using namespace std;
// it is done by merge sort in order of nlogn
int main()
{
    int count = 0, n;
    int j, i, k;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (j = 0; j < n; j++)
    {
        for (k = j + 1; k < n; k++)
        {
            if (arr[j] > arr[k])
            {
                count++;
            }
        }
    }
    cout << "count inversions= " << count;
    return 0;
}