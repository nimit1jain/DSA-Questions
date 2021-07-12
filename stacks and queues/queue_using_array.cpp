#include<iostream>
using namespace std;
#define n 100;
class queue{
int *arr;
int front;
int back;
public:
queue()
{
    arr=new int [100];
    front=-1;
    back=-1;
}
void enqueue(int x)
{
    if(back==99)
    {
        cout<<"queue is full";
        return;
    }
    else if (front==-1)
    {
        front++;
        
    }
    back++;
    arr[back]=x;
    
}void dequeue()
{
    if(front==-1||front>back)
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    front++;
}
void peek(){
    if(front==-1||front>back)
    {
        cout<<"queue is empty";
        return;
    }
    cout<<arr[front];
}
void empty()
{
    if(front==-1||front>back)
{
    cout<<"queue is empty";
    
}
else cout<<"queue is not empty";

}



};
int main()
{queue q;
q.enqueue(3);
q.enqueue(4);
q.enqueue(5);
q.dequeue();
q.enqueue(7);
q.dequeue();
q.peek();
q.empty();
    
return 0;

}