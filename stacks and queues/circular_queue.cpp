#include<iostream>
using namespace std;
class circularqueue{
int queue[5];
int front=-1;
int rear=-1;
public:
void enqueue(int x)
{
if(front==-1&&rear==-1)
{
    front++;
    rear++;
    queue[rear]=x;
}
else if((rear+1)%5==front)
{
    cout<<"queue is full"<<endl;
    return;
}
else{
    rear=(rear+1)%5;
    queue[rear]=x;
}
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    else if(front==rear)
    {
        front=rear-1;
    }
    else 
    {
        front=(front+1)%5;
    }
}
void Front()
{
    cout<<queue[front]<<endl;
}
};
int main()
{circularqueue q1;
q1.enqueue(1);
q1.enqueue(3);
q1.enqueue(4);
q1.enqueue(5);
    q1.Front();
    q1.dequeue();
    q1.Front();
return 0;

}