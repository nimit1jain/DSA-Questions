#include <iostream>
using namespace std;
#define n 100;
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[100];
        top = -1;
    }

    void push(int x)
    {
        if (top ==99)
        {
            cout << "stack is overflow";
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "no element to pop";
        }
        top--;
    }
    void Top()
    {
        if (top == -1)
        {
            cout << "stack is empty";
        }
        cout << arr[top];
    }
    void empty()
    {
        if (top == -1)
        {
            cout << "stack is empty";
        }
    }
};
int main()
{
    stack st;
    st.push(2);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(8);
    st.Top();
    st.pop();
    st.Top();
    st.empty();

    return 0;
}