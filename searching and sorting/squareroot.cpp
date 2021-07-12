#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i*i<n)
        cout<<i*i<<endl;
        else
        break;
    }
return 0;

}