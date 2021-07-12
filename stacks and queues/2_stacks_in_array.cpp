#include <iostream>
using namespace std;
#define n 100;
class stack
{
    int *arr;
    int top1;
    int top2;

public:
    stack()
    {
        arr = new int[100];
        top1 = -1;
        top2=-2;
    }

    void push1(int x)
    {
        if (top1 ==99)
        {
            cout << "stack is overflow";
        }
        top1= top1+2;
        arr[top1] = x;
    }
    void push2(int x)
    {
        if (top2 ==99)
        {
            cout << "stack is overflow";
        }
        top2= top2+2;
        arr[top2] = x;
    }
    void pop1()
    {
        if (top1 == -1)
        {
            cout << "no element to pop";
        }
        top1=top1-2;
    }
    void pop2()
    {
        if (top2 == -2)
        {
            cout << "no element to pop";
        }
        top2=top2-2;
    }
    void Top1()
    {
        if (top1 == -1)
        {
            cout << "stack is empty";
        }
        cout << arr[top1];
    }
    void Top2()
    {
        if (top2 == -2)
        {
            cout << "stack is empty";
        }
        cout << arr[top2];
    }
    void empty1()
    {
        if (top1 == -1)
        {
            cout << "stack is empty";
        }
    }
    void empty2()
    {
        if (top2 == -2)
        {
            cout << "stack is empty";
        }
    }
};
int main()
{
    stack st1;
    stack st2;
    st1.push1(1);
    st2.push2(0);
    st1.push1(3);
    st2.push2(2);
    st1.push1(5);
    st2.push2(4);
    st1.push1(7);
    st2.push2(6);
    st1.push1(9);
    st2.push2(8);
    st1.Top1();
    st2.Top2();
    st1.pop1();
    st2.pop2();
    st1.Top1();
    st2.Top2();
    return 0;
}