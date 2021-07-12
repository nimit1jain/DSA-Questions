#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    int arr[n][m];
    int index = -1;
    int x;
    cout << "which smallest element you want to find" << endl;
    cin >> x;
    cout << "enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int brr[n * m];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            brr[k] = arr[i][j];
            k++;
        }
    }
    sort(brr, brr + (n * m));
    int t = 0;
    for (int i = 0; i < n * m; i++)
    {
        if (brr[i] != brr[i + 1])
        {
            t++;
            if (t = x - 1)
            {
                cout << "required element is=" << brr[i + 1];
                break;
            }
        }
    }

    return 0;
}
