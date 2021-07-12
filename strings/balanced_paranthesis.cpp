#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack <char> stc;
    for(int i=0;i<s.length();i++)
    {if(stc.empty())
    {
        return false;
    }
        if(s[i]=='['||s[i]=='{'||s[i]=='(')
        {
            stc.push(s[i]);
        }
        else if(s[i]==')')
        {
            char a=stc.top();
            stc.pop();
            if(a=='{'||a=='[')
            {
                cout<<"this is not balanced paranthesis string"<<endl;
            return false;
            }
        }
        else if(s[i]=='}')
        {
            char a=stc.top();
            stc.pop();
            if(a=='('||a=='[')
            {
                cout<<"this is not balanced paranthesis string"<<endl;
            return false;
            }
        }
        else if(s[i]==']')
        {
            char a=stc.top();
            stc.pop();
            if(a=='{'||a=='(')
            {
                cout<<"this is not balanced paranthesis string"<<endl;
            return false;
            }
        }
      
    }


return 1;

}