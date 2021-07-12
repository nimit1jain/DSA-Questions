#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class stackk
{
public:
    deque<int> dq;
void Push(int x)
{
    dq.push_back(x);
}
void Pop()
{
    if(dq.empty())
{
    cout<<"stack is empty"<<endl;
}
else dq.pop_back();
}
void Top()
{if(dq.empty())
{
    cout<<"stack is empty"<<endl;
}
else cout<<dq.back()<<endl;
    
}



};
int main()
{
stackk st;
st.Push(1);
st.Push(2);
st.Push(3);
st.Push(4);
st.Push(5);
st.Pop();
st.Top();
    return 0;
}