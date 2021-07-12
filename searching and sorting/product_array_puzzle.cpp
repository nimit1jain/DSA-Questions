#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } int product=1;
for(int i=0;i<n;i++)
{product=product*arr[i];

}
                     
for(int i=0;i<n;i++)
{
    cout<<product/arr[i]<<" ";
}

return 0;

}