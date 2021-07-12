#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// int main()
// {
//     string s1="skdfhaiuhdfefnf";
//     for(int i=s1.length();i>=0;i--)
//     {
// cout<<s1[i];
//     }
// return 0;

// }
int main()
{
    string s1="nimit";
    int i=0;
    int j=s1.length()-1;
    for(;i<j;i++,j--)
    {
        swap(s1[i],s1[j]);
    }
    for(i=0;i<s1.size();i++)
    {
        cout<<s1[i];
    }
    return 0;
}
