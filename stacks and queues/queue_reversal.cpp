#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
void reversal(queue<int> &q)
{
    stack<int>st;
    if(q.empty())
    {
        cout<<"the queue is empty"<<endl;
        return;
    }
    else  
    {
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            st.push(temp);
        }
        while(!st.empty())
        {
            int temp=st.top();
            st.pop();
            q.push(temp);
        }


    }
}
void printq(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reversal(q);
    printq(q);
return 0;

}
