#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printq(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() <<"->";
        q.pop();
    }
    cout<<"NULL"<<endl;
}
void interleave(queue<int> &q)
{
    stack<int> s1;
    stack<int> s2;
    for(int i=0;i<=q.size()/2+1;i++)
    {    int temp=q.front();
        s1.push(temp);
        q.pop();
    }
    printq(q);
    while(!q.empty())
    {int temp=q.front();
        s2.push(temp);
        q.pop();
    }
    
    while(!s1.empty()&&!s2.empty())
    {   int temp=s2.top();
        q.push(temp);
        s2.pop();
        int pemp=s1.top();
        q.push(pemp);
        s1.pop();
    }
    while(!q.empty())
    {
        s1.push(q.front());
        q.pop();
    }
    while(!s1.empty())
    {
        q.push(s1.top());
        s1.pop();
        

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
    q.push(6);
    q.push(7);
    q.push(8);
    
 interleave(q);
 printq(q);
 return 0;

}