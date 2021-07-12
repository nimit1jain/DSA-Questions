#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of first array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of first array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cout << "size of second array" << endl;
    cin >> m;
    int brr[m];
    cout << "enter the elements of second array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    int i = 0;
    int j = 0;
    int s1 = 0;
    int s2 = 0;
    int maxi = 0;
    while (i < n && j < m)
    {
        if (arr[i] < brr[j])
        {
            s1 = s1 + arr[i];
            i++;
        }
        else if (arr[i] > brr[j])
        {
            s2 = s2 + brr[j];
            j++;
        }
        else 
        {maxi = maxi + max(s1, s2)+arr[i];
            s1 = 0;
            s2 = 0;
        i++;
        j++;
        }
    }
    while(i<n)
    {
        s1=s1+arr[i];
        i++;
    }
    while(j<m)
    {
        s2=s2+brr[j];
        j++;
    }
    maxi=maxi+max(s1,s2);
    cout<<maxi<<endl;
    return 0;
}