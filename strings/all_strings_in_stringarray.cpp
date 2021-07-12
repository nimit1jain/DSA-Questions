#include <iostream>
#include<bits/stdc++.h>
#include<string>
#define R 3;
#define C 3;
using namespace std;

void printfunc(string arr[3][3],string sen,int r)
{
if(r==3)
{
    cout<<sen<<endl;
    return;
}
for(int i=0;i<3;i++)
{
    if(arr[r][i]!="")
    {
        printfunc(arr,sen+" "+arr[r][i],r+1);
    }
}
}


int main()
{
    string arr[3][3] = { {"you", "we"},
                       {"have", "are"},
                       {"sleep", "eat", "drink"} };
string sen="";
printfunc(arr,sen,0);
    return 0;
}