#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int setBit(int num, int pos)
{
    return (num & (1 << pos) != 0);
}
void count(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    // xorsum= 0111^0101=0010
    int tem = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        // 0010&0001=0011
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
        // xorsum=0001 now
    }
    int sec = 0;
    for (int i = 0; i < n; i++)
    {
        // if the arr[i] has 1 on the same position as xor has its rightmost 1 then xor it with xorsum
        if (setBit(arr[i], pos - 1))
        {
            sec = sec ^ arr[i];
        }
    }
    int first = tem ^ sec;
    cout << first << " ";
    cout << sec << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 4, 5};
    count(arr, 8);
    //     int c=0;
    //     int n=19;
    //     while(n!=0)
    //     {
    //         n=n&(n-1);
    //         c++;
    //     }
    // cout<<c;
    return 0;
}