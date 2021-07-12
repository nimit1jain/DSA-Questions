#include<iostream>
using namespace std;
class node{
public: int data;
node* next;
node* prev=NULL;
node(int value)
{
    data=value;
    next=NULL;
    prev=NULL;
}
};
void insertathead(node *&head, int value)
{
    node *n = new node(value);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void insertattail(node *&head, int value)
{
    if (head == NULL)
    {
        insertathead(head, value);
        return;
    }
    node *temp = head;
    node *n = new node(value);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    n->next = NULL;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
node* delg(node* head)
{
    if(head==NULL)
    return head;
    node* temp=head;
    node*pemp=head;
    while(temp->next!=NULL){
    if(temp->data<temp->next->data)
    {
        if(temp==head)
        {
            head=temp->next;
            head->prev=NULL;
            node* todelete=temp;
            temp->next=NULL;
            temp=head;
            
            delete todelete;
        }
        else{
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;

            node* todelete=temp;
            temp=temp->next;
            

            delete todelete;
        }
    }
    else
    temp=temp->next;
            
    }
    return head;
}
int main()
{node* head(NULL);
insertattail(head,21);
insertattail(head,20);
insertattail(head,30);
insertattail(head,40);
insertattail(head,50);
insertattail(head,60);
head=delg(head);

display(head);

    
return 0;

}