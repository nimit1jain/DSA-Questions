#include<iostream>
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
void insertathead(node *&head, int value)
{
    node *n = new node(value);
    n->next = head;
    head = n;
}

void insertattail(node *&head, int value)
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
node* lastfirst( node* &head)
{
    node* second=head->next;
    node* temp=head;
    node* first=head;
    node* prev;
    while(temp->next!=NULL)
    {prev=temp;
    temp=temp->next;

    }
    temp->next=second;
    prev->next=first;
first->next=NULL;
head=temp;
    return head;
}
int main()
{
node *head(NULL);
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);
    insertattail(head, 7);
    insertattail(head, 8);
    insertattail(head, 9);
    lastfirst(head);
display(head);


}