#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
class queue{
stack<int>s1;
stack<int>s2;
public:
void push(int x)
{s1.push(x);

}
void pop()
{
    if(s1.empty()&&s2.empty())
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    else if(s2.empty())
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }
    cout<<s2.top()<<endl;
    s2.pop();
}
void peek()
{
    if(!s2.empty())
    {
        cout<<s2.top()<<endl;
    }
    else if(s2.empty()){
        cout<<"queue is empty"<<endl;
    }
}


};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    q.peek();
return 0;

}