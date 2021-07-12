#include <iostream>
#include<bits\stdc++.h>
#include<algorithm>
using namespace std;
// but we can first sort both arrays and the search the element in big array using binaryh search
// i dont know whats happeneing in this code
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "next"<<endl;
    int m;
    cin >> m;
    int brr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    int maxi=*max_element(arr,arr+n);
    // cout<<maxi;
   int  mp[maxi+1];
    for(int i=0;i<maxi+1;i++)
    {
        mp[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
       mp[arr[i]]+=1;
        
    }
    int count = 0;
    
    for (int i = 0; i <m ; i++)
    {

        if (mp[(brr[i])]!=0)
        {
            count++;
        }
        else break;
    }
    if (count == m)
        cout << "yes";
    else
        cout << "no";
    return 0;
}