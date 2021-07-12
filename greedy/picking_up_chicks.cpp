#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "chicks" << endl;
    cin >> n;
    int k;
    cout << "min chicks" << endl;
    cin >> k;
    int b;
    cout << "barn location" << endl;
    cin >> b;
    int t;
    cout << "time";
    cin >> t;
    int pos[n];
    cout << "positions" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> pos[i];
    }
    cout << "velocity" << endl;
    int vel[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vel[i];
    }
    int count = 0;
    int swps = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if ((b - pos[i]) / vel[i] <= t)
        {
            count++;
        }
        else
        {

            for (int j = i - 1; j >= 0; j--)
            {
                if ((b - pos[j]) / vel[j] <= t)
                {
                    swps = swps+i - j;
                    count++;
                    swap(vel[i],vel[j]);
                    break;
                }
            }
            
        }
    }
cout<<count<<endl;
    cout << swps << endl;

    return 0;
}