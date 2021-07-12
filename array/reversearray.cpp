#include<iostream>
#include<string>
using namespace std;
// if space complexity is not mentioned you can make a new string in the function and store the original string from back and then return the new string





string reverse(string str)
{int i,j;
int len=str.length();

i=0;
j=len-1;
// while(i<=j)
for(;i<j;i++,j--)
{
    swap(str[i],str[j]);
    // i++;
    // j--;
}
return str;

}


int main()
{
string str="hello";
str=reverse(str);
// for(int i=0;i<str.length();i++)

cout<<"reversed string="<<str<<endl;
return 0;

}