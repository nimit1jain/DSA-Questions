#include <iostream>
using namespace std;
int main()
{
    cout << "enter the index for a square matrix" << endl;
    int m;
    cin >> m;
    int arr[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m - 1; j++)
        {
            swap(arr[i][j + 1], arr[j + 1][i]);
        }
    }
    int left = 0;
    int right = m - 1;
    while (left <= right)
    {
        for (int i = 0; i < m; i++)
        {
            swap(arr[i][left], arr[i][right]);
        }
        left++;
        right--;
    }

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}