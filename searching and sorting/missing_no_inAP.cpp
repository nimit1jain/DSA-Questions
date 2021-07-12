#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the  first term , common difference and nth term"<<endl;
    int a,c,b;
    cin>>a>>c>>b;
    float sum=(b-a+c)/c;
    float check=sum-(int) sum;
    if(check<1)
    {
        cout<<"its  not an AP term"<<endl;
    }
    else cout<<"its an AP term"<<endl;
return 0;

}