#include <iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int arr[8] = {1, 2, -3, -7, 5, 4, 0, 1};
    int currsum=0;
    int maxi=0;
    for(int i=0;i<8;i++)
    {
        currsum=currsum+arr[i];
        if(currsum>maxi)
        {
            maxi=currsum;
        }
        else if(currsum<0)
        {
            currsum=0;
        }
    }
    return 0;
}