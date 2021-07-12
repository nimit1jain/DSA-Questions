#include <iostream>
using namespace std;
class node
{
public:
    node *next;
    node *prev;
    int data;
    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
class stackk
{
    node *top;
    node *mid;
    int count;
    public:
    stackk()
    {
        top = NULL;
        int count = 0;
    }
    void Push(int x)
    {
        node *n = new node(x);
        if (top == NULL)
        {
            top = n;

            count++;
        }
        else
        {
            top->next = n;
            n->next = NULL;
            n->prev = top;
            top = n;
            count++;
        }
        if ((count % 2) != 0)
        {
            if (top->prev == NULL)
            {
                mid = top;
            }
            else
                mid = mid->next;
        }
    }
    void pop()
    {
        if (top==NULL)
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        else{

            node* temp=top->prev;
            temp->next=NULL;
            top=temp;
            count--;
        }
        if((count%2)==0)
        {while(mid->prev!=NULL)
            mid=mid->prev;
        }
    }
    int getmid()
    {
        return mid->data;
    }
};
int main()
{stackk st;
st.Push(1);
st.Push(2);
st.Push(3);
st.Push(4);
st.Push(5);
cout<<st.getmid()<<endl;


    return 0;
}