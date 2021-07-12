#include<iostream>
#include<algorithm>
using namespace std;

int checkpalindrome(string s,int i,int j)
{while(i<j)
{
    if(s[i]!=(s[j]))
    {
       return 0;
        break;
    }
    i++;j--;
}

return 1;
}
int main()
{string s;
cin >>s;
int count =0;

for(int i=0;i<s.length();i++)
{
    for(int j=i;j<s.length();j++)
    {
        if(checkpalindrome(s,i,j))
        {
            count++;
        }
    }
}
cout<<"total palindromes are = "<<count<<endl;
    
return 0;

}