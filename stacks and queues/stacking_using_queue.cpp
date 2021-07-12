#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
// class stackkk
// {
//     queue<int> q1;
//     queue<int> q2;

// public:
//     void Push(int k)
//     {
//         q1.push(k);
//         while (!q2.empty())
//         {
//             q1.push(q2.front());
//             q2.pop();
//         }
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//     }
//     void Pop()
//     {
//         q2.pop();
//     }
//     void Top()
//     {
//         cout << q2.front();
//     }
// };
// int main()
// {stackkk st1;
//     st1.Push(3);
//     st1.Push(4);
//     st1.Push(5);
//     st1.Push(6);
//     st1.Push(7);
//     st1.Pop();
//     st1.Top();

//     return 0;
// }
class stackk{
queue<int>  q1;
queue<int> q2;
public:
        void Pop()
        {
            if(q2.empty())
            {
                return;
            }
            else
            while(q2.size()!=1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            q2.pop();
            while(!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
        }
        void Push(int k)
        {
            q2.push(k);
        }
        void Top()
        {
            cout<<q2.front()<<endl;
        }
};
int main()
{
    stackk st2;
    st2.Push(3);
    st2.Push(4);
    st2.Push(5);
    st2.Push(6);
    st2.Push(7);
    st2.Pop();
    st2.Top();
    return 0;
}