#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ip[] = {1, 2, 3, 4, 5};
    int op[] = {4, 5, 3, 2, 1};
    stack<int> st;
    st.push(ip[0]);
    int i = 1;
    int j = 0;
    while (!st.empty() || j != 5)
    {
        while (op[j] != st.top() && i < 5)
        {
            st.push(ip[i]);
            i++;
        }
        if (op[j] == st.top())
        {
            st.pop();
            j++;
        }
        else if (op[j] != st.top() && i == 5)
        {
            cout << "not valid" << endl;
            break;
        }
    }

    cout << "valid" << endl;

    return 0;
}