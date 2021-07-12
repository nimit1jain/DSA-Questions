#include <iostream>
#include <deque>
#include <bits/stdc++.h>
using namespace std;
class Queue
{
    deque<int>dq;

public:
    
    void Push(int x)
    {
       
        
           
            dq.push_front(x);
        
        
    }
    void Pop()
    {
        if (dq.empty())
        {
            cout << "queue is empty" << endl;
        }
        else
            dq.pop_back();
    }
    void Top()
    {
        if (dq.empty())
        {
            cout << "queue is empty";
        }
        else
            cout << dq.back() << endl;
    }
};
int main()
{
    Queue dq;
    dq.Push(1);
    dq.Push(2);
    dq.Push(3);
    dq.Push(4);
    dq.Pop();
    dq.Top();

    return 0;
}