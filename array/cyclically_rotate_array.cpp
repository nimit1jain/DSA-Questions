#include <iostream>
using namespace std;
// this is also a method using one loop only
// void rotate(int a[], int n)
// {
// int temp=0;

// temp = a[n-1];
// for(int i=n-1;i>=0;i--)
// {
// a[i]=a[i-1];
// }
// a[0]=temp;
// }
int main()
{
    int n, i;
    int k;
    cout << "enter the size and the degrece of cyclical rotation";
    cin >> n;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = n - k; i < n; i++)
    {
        cout << arr[i];
    }
    i = 0;
    while (i < (n - k))
    {
        cout << arr[i];
        i++;
    }
    return 0;
}