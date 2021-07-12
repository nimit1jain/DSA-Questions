#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;
node(int value)
{
    data=value;
    next=NULL;
}
};
void nthnodelast(node* head,int n)
{node* temp=head;
    int size=0;
    while(temp!=NULL)
    {
        size++;
        temp=temp->next;
    }node* pemp=head;
    for(int i=1;i<=size-n;i++)
    {
        pemp=pemp->next;
    }
cout<<pemp->data<<endl;
}void insertattail(node *&head, int value)
{
    node *n = new node(value);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
int main()
{node* head(NULL);
     insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);
    nthnodelast(head,2);
return 0;

}