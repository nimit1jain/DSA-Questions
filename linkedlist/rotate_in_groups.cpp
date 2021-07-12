#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
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
void reversenode(node *start, int k)
{
    node *change = start->prev;
    node *temp = start;
    for (int i = 1; i < k; i++)
    {while(temp->next!=NULL)
        temp = temp->next;
    }
    if(temp->next==NULL)
    {
        temp->next=temp->prev;
        temp->prev=NULL;
        change->next=temp;
        temp=temp->next;
        while(temp->prev!=start)
        {
            node*wemp=temp->next;
            temp->next=temp->prev;
            temp->prev=wemp;
            temp=temp->next;
        }
        temp->prev=temp->next;
        temp->next=NULL;

    }
    start->next=temp;
    node* chemp=temp->next;
    temp->next = temp->prev;
    temp->prev = change;
    temp=temp->next;
    while(temp->next != start)
    {node* pemp=temp->next;
    temp->next=temp->prev;
    temp->prev=pemp;
    temp=temp->next;

    }
    temp->prev=temp->next;
    temp->next=chemp;
    reversenode(temp,k);

}

int main()
{node* head(NULL);
insertattail(head,2);
insertattail(head,3);
insertattail(head,4);
insertattail(head,5);
insertattail(head,6);
insertattail(head,7);
insertattail(head,8);
insertattail(head,9);
head=head->next;
int k=2;
reversenode(head,2);
display(head);
}