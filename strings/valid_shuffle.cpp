#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s1="abcde";
    string s2="123";
    string test="23abcde1";
    string temp1=s1+s2+s1+s2;
    if(temp1.find(test))
    {
        cout<<"yes";
    }
    else cout<<"no";
    
return 0;

}