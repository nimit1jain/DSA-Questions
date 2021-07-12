#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "length" << endl;
    cin >> n;
    int arr[n];
    cout << "enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int small = 0;
    int big = 0;
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] <= arr[j + 1])
        {
            small++;
        }
        else
        {
            big++;
        }
    }
    if (small == n - 1 || big == n - 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
