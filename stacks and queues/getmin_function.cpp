#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

class specialstack
{
public:
    int min;
    stack<int> st;
    
    void Push(int x)
    {
        if (st.empty())
        {
            st.push(x);
            min = x;
            
        }
        else if (x > min)
        {
            st.push(x);
        }
        else
        {
            st.push(2 * x - min);
            min = x;
        }
    }
    void Pop()
    {
        int x = st.top();
        if (x > min)
        {
            st.pop();
        }
        else
            min = 2 * min - x;
        st.pop();
    }
    int getmin()
    {
        return min;
    }
};
int main()
{
    specialstack s;
    s.Push(2);
    s.Push(5);
    s.Push(1);
    s.Push(3);
    s.Push(4);
   
    cout << s.getmin() << endl;
    s.Pop();
    s.Pop();
    s.Pop();
    cout << s.getmin() << endl;
    return 0;
}

// // this was by using extra space
// #include <iostream>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;
// class minstack
// {
// public:
//     vector<int> a, b;
//     minstack()
//     {

//         a = b = {};
//     }
//     void push(int x)
//     {
//         a.push_back(x);
//         if (b.empty())
//         {
//             b.push_back(x);
//         }
//         else
//         {
//             int newmin = min(x, *b.rbegin());
//             if (newmin != *b.rbegin())
//             {
//                 b.push_back(newmin);
//             }
//         }
//     }
//     void pop()
//     {
//         int ele = *a.rbegin();
//         a.pop_back();
//         if (ele <= *b.rbegin())
//         {
//             b.pop_back();
//         }
//     }
//     int top()
//     {
//         return *a.rbegin();
//     }
//     int getmin()
//     {
//         return *b.rbegin();
//     }
// };
// int main()
// {
//     minstack st;
//     st.push(12);
//     st.push(45);
//     st.push(3);
//     st.push(1);
//     st.push(33);
//     cout << st.getmin() << endl;
//     st.pop();
//     st.pop();
//     cout << st.getmin() << endl;
//     return 0;
// }