#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;
int prec(char t)
{
    if(t=='^')
    {return 3;}
    else if(t=='*'||t=='/')
    {return 2;}
    else  if(t=='+'||t=='-')
    {return 1;}
    else return -1;
}
void changer(string s)
{
    stack<char> st;
    string result;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] < 'z')
        {
            result+=s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                result+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        result+=st.top();
        st.pop();
    }
    reverse(result.begin(),result.end());
    cout<<result;
}
int main()
{
string s="(a-b/c)*(a/k-l)";
reverse(s.begin(),s.end());
for(int i=0;i<s.size();i++)
{
    if(s[i]=='(')
    {
        s[i]=')';
    }
    else if(s[i]==')')
    {
        s[i]='(';
    }
}
changer(s);
    return 0;
}