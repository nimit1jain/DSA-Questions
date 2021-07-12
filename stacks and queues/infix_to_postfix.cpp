#include <iostream>
#include <stack>
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
            cout << s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                cout << st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                cout << st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}
int main()
{
string s="(a-b/c)*(a/k-l)";
changer(s);
    return 0;
}