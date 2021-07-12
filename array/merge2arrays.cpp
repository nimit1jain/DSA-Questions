#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the lengths of arrays" << endl;
    cin >> n >> m;
    int arr[n], crr[m];
    cout << "enter the elements of array 1";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the elements of array 2";
    for (int j = 0; j < m; j++)
    {
        cin >> crr[j];
    }
    int j=0,i=(n-1);
    while( i>=0 && j<m)
    {
        if(arr[i]>crr[j])
        {
            swap(arr[i],crr[j]);
        }
        i--;
        j++;
    }
    sort(arr,arr+n);
    sort(crr,crr+n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << crr[i];
    }
    return 0;
}
