#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str1="abcdef";
    string str2="efabcd";
    string temp= str1+str1;
    if(temp.find(str2))
    {
        cout<<"yes it is a roatation of given string";
    }
    else cout<<"not a roation";
return 0;

}