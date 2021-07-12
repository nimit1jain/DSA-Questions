#include<iostream>
using namespace std;

string removeAdjacent(string s,int size)
{if(size==0)
{
    return 0;
}
if(size==1)
{
    return s;
}
    for(int i=0;i<size;i++)
    {
        if(s[i]==s[i+1])
        {
            s.erase(i,2);
            
            s=removeAdjacent(s,s.size());
            break;
        }
    }
    return s;
}
int main()
{
    string s;
    cin>>s;
    s=removeAdjacent(s,s.size());
    cout<<s;
return 0;

}