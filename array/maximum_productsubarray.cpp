#include <iostream>
#include<unordered_map>
using namespace std;
int main()
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int maxproduct =1;
int product=1;
for(int i=0;i<n;i++)
{
    product=product*arr[i];
    
    if(product>maxproduct)
    maxproduct=product;
}
cout<<maxproduct;
return 0;
}