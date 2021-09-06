#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int getbit(int n,int pos)
{
    return((n&(1<<pos))!=0);
}
int setbit(int n,int pos)
{ 
    return(n|(1<<pos));
}
int clearbit(int n,int pos)
{
    return (n& ~(1<<pos));
}
int power2(int n)
{
    return (n&& !(n&n-1));
}

int count1(int n)
{   int c=0;
    while(n)
    {c++;

    n=n&(n-1);
        
    }
    return c;
}
int main()
{
    cout<<getbit(13,3)<<endl;
    // cout<<setbit(5,1)<<endl;
    // cout<<clearbit(5,2)<<endl;
    // cout<<power2(12)<<endl;
    // cout<<count1(5)<<endl;


return 0;

}