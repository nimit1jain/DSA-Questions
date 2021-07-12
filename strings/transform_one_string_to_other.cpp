#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
   
    cout<<"enter the original string"<<endl;
    string s;
    cin>>s;
    cout<<"enter the string to transform"<<endl;
    string t;
    cin >>t;
    int count=0;
    int i=s.length()-1;
    int j=t.length()-1;
    while(i>=0&&j>=0)
    {
        if(s[i]==t[j])
        {
            i--;j--;
        }
        else if(i>=0&&s[i]!=t[j])
        {
            i--;count++;
        }
    }
    cout<<"it will take "<<count<<" steps to transform this !"<<endl;

    
    
    
    return 0;

}