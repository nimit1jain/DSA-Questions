#include <iostream>
using namespace std;
class node
{
public:
    node *next;
    node* prev;
    int data;

    node(int value)
    {
        data = value;
        next = NULL;
        prev=NULL;
    }
};
class dqueue
{
    node *front;
    node *rear;

public:
    dqueue()
    {
        front = NULL;
        rear = NULL;
    }
    void push_rear(int x)
    {
        node *n = new node(x);
        if (front == NULL && rear == NULL)
        {
            rear = n;
            front = n;
        }
        else
        {
            rear->next = n;
            n->next=NULL;
            n->prev=rear;
            rear=n;
        }
    }
    void Push_front(int x)
    {node *n = new node(x);
        if (front == NULL && rear == NULL)
        {
            rear = n;
            front = n;
        }
        else 
        {
            n->next=front;
            front->prev=n;
            n->prev=NULL;
            front=n;
        }

    }
    void Pop_front()
    {if(front!=NULL){
        node* k=front->next;
        front=front->next;
        k->prev=NULL;
    }
    else cout<<"queue is empty"<<endl;
    
    }
    void Pop_rear()
    {
        if(front==NULL)
        {
            cout<<"queue is empty"<<endl;
        }
        else 
        {
            node* k=rear->prev;
            rear=rear->prev;
            k->next=NULL;
        }
    }
    void Front()
    {
        if(front==NULL)
        {
            cout<<"queue is empty"<<endl;
        }
        else cout<<front->data<<endl;
    }
    void Rear()
    {
         if(front==NULL)
        {
            cout<<"queue is empty"<<endl;
        }
        else cout<<rear->data<<endl;
    }
};
int main()
{dqueue dq;
dq.Push_front(1);
dq.push_rear(2);
dq.push_rear(3);
dq.Push_front(4);
dq.Front();
dq.Rear();

    return 0;
}