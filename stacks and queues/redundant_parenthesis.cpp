#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s = "a+(b)";
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] >= 'a' && s[i] <= 'z')
    //     {continue;
    //     }
    //     if (s[i] != ')')
    //     {
    //         st.push(s[i]);
    //     }
    //     else if (s[i] == ')')
    //     {
    //         int count = 0;
    //         if (st.top() == '(' && count == 0)
    //         {
    //             cout << "yes" << endl;
    //             return 0;
    //         }
    //         else
    //         {
    //             while (st.top() != '(' || st.empty())
    //             {
    //                 st.pop();
    //                 count++;
    //             }
    //             st.pop();
    //         }
    //     }
    // }
    // cout << "No" << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            continue;
        }
        if (s[i] != ')')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                cout << "its not a valid string" << endl;
            return 0;
            }
            else
            {
                while (!st.empty() && st.top() != '(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
    }
    cout << "yes it is valid string" << endl;
    return 0;
}
