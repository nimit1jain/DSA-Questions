#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    cout<<"number of days you want him  to survive"<<endl;
    int s;
    cin>>s;
    int n;
    cout<<"number of units of food he can buy once "<<endl;
    cin>>n;
    int m;
    cout<<"number of units he need to survive a day"<<endl;
    cin>>m;
    if(m>n||(m*7)>(n*6))
    {
        cout<<"he will not survive";
        return 0;
    }
   int days=(m*s)/n;
   if((m*s)%n!=0)
   {
       days++;
   }
   cout<<"he will survive if he will buy "<<days<<"stocks"<<endl;

    
return 0;

}