#include <iostream>
using namespace std;
// thie approach is of order n^2 so below is the o n approach also
// int main()
// {
//     int n, i,k;
//     cin >> n;
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int low = 0;
//     while(k<n){
//     if (arr[low] >= 0)
//     {
//         for (int j = low + 1; j < n; j++)
//         {
//             if (arr[j] < 0)
//             {
//                 swap(arr[low + 1], arr[j]);
//                 low++;
//                 break;
//             }
//         }
//     }
//     else
//     {
//         for (i = low + 1; i < n; i++)
//         {
//             if (arr[i] > 0)
//             {
//                 swap(arr[low + 1], arr[i]);
//                 low++;
//                 break;
//             }
//         }
//     }k++;
//     }
//     cout<<low;
//     for (i = 0; i < n; i++)
//         cout << "rearranged array is ="<<arr[i] << endl;
//     return 0;
// }
// int main()
// {
//     int n, i = 0, k = 0, m = 0;
//     cin >> n;
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     while (i < n)
//     {
//         if (arr[m] > 0 && arr[i] < 0)
//         {
//             swap(arr[i], arr[m]);
            
//             m = m + 2;
//         }
        
//         i++;
//     }
//     for (i = 0; i < n; i++)
//         cout << "rearranged array is =" << arr[i] << endl;
//     return 0;
// }
int main() {
int sum = 0;
cout << "enter number" << endl;
int i = 0;
while (true) {
    cin >> i;
    sum += i;
    //cout << i << endl;
    if (cin.peek() == '\n') {
        break;
    }
    
}

cout << "result: " << sum << endl;
return 0;
}