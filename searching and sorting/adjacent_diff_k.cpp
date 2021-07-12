#include <iostream>
using namespace std;

int main()
{
    int n;
    int k;
    cout << "enter the size of array and the max distance between elements";
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int element;
    cout << "enter the element you want to find";
    cin >> element;
    int diff = -1;
    for (int i = 0; i < n; i++)
    {
        diff = element - arr[i];
        if (diff != 0)
        {
            i = i + (diff / k);
        }
        else
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}