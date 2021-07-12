#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// we can also use quicksort algo that is of order nlogn
int main()
{
    int arr[] = {17, 2, 1, 5, 9, 13};
    sort(arr,arr+6);
    cout << "the required third minimum element is" <<arr[2] <<endl;
    
    return 0;
}
