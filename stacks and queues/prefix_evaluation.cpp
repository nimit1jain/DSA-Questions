#include <iostream>
#include <stack>
using namespace std;
int prefix(string s)
{
    stack<int> st;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '-')
        {
            int oper1 = st.top();
            st.pop();
            int oper2 = st.top();
            st.pop();
            st.push(oper1 - oper2);
        }
        else if (s[i] == '*')
        {
            int oper1 = st.top();
            st.pop();
            int oper2 = st.top();
            st.pop();
            st.push(oper1 * oper2);
        }
        else if (s[i] == '+')
        {
            int oper1 = st.top();
            st.pop();
            int oper2 = st.top();
            st.pop();
            st.push(oper1 + oper2);
        }
        else if (s[i] == '/')
        {
            int oper1 = st.top();
            st.pop();
            int oper2 = st.top();
            st.pop();
            st.push(oper1 / oper2);
        }
        else 
        {
            st.push(s[i] - '0');
        }
    }

    cout << st.top() << endl;
    return 0;
}

int main()
{
    string s;
    cin >> s;
    prefix(s);
    return 0;
}      