#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++) 
    {
        cin >> arr[i];
    }
    cout << "enter the sum= ";
    int sum;
    cin >> sum;
    for (int i = 0; i < n; i++)
    {
        int k = i + 1;
        int m = n - 1;
        if (arr[i] + arr[k] + arr[m] == sum)
        {
            cout << "[" << arr[i] << "," << arr[k] << "," << arr[m] << "] ";
            k++;
            m--;
        }
        else if (arr[i] + arr[k] + arr[m] > sum)
        {
            m--;
        }
        else
            k++;
    }
    return 0;
}