#include<iostream>
using namespace std;
class  node{
    public:
node* next;
int data;
node(int value)
{
    data=value;
    next=NULL;
}


};
class queue{
node*front;
node*back;
public:
queue(){
front=NULL;
back=NULL;
}
void enqueue(int x)
{node* n=new node(x);
    if(front==NULL)
    {
        back=n;
        front=n;
    }
    back->next=n;
    back=n;
}
void dequeue()
{   if(front==NULL)
{
    cout<<"queue is empty"<<endl;
    return;
} 
front=front->next;
}
void peek()
{
    if(front==NULL)
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    cout<<front->data<<endl;
}
void  empty()
{
    if(front==NULL)
    {cout<<"queue is empty"<<endl;
    }
    else cout<<"queue is not empty"<<endl;
}



};
int main()
{queue q;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);
q.peek();
q.dequeue();
q.peek();
q.enqueue(5);
q.empty();
    
return 0;

}