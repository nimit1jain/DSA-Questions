#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{string s1;
cin>>s1;
string s2;
cin>>s2;
map<char,int> mp1;
map<char,int> mp2;
for(int i=0;i<s1.length();i++)
{
    mp1[s1[i]]++;
}
for(int i=0;i<s2.length();i++)
{
    mp2[s2[i]]++;
}
int ans=0;

for(auto it1=mp1.begin();it1 != mp1.end();it1++)  
{for(auto it2=mp2.begin();it2 != mp2.end();it2++)
   { if(it1->first==it2->first)
    {
        ans=ans+min(it1->second,it2->second);
        break;
    }
}}
cout<<ans<<endl;
return 0;

}