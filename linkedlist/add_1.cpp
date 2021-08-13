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
node *reverselist(node *&head)
{
    node *prev = NULL;
    node *current = head;
    node *nextptr;
    while (current != NULL)
    {
        nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
    }
    return prev;
}
int main()

{

    node *head(NULL);
    // insertattail(head, 1);
    // insertattail(head, 2);
    // insertattail(head, 3);
    // insertattail(head, 4);
    // insertattail(head, 5);
    // insertattail(head, 6);
    insertattail(head, 3);
    insertattail(head, 2);
    insertattail(head, 9);
    display(head);
head=reverselist(head);
node* cur=head;
while(cur!=NULL)
{
    if(cur->data==9&&cur->next==NULL)
    {
        node *zero=new node(1);
        zero->next=head;
        head=zero;
        cur->data=0;
        cur=cur->next;
    }
    else if(cur->data==9)
    {
        cur->data=0;
        cur=cur->next;
    }
    else{
        cur->data=cur->data+1;
        cur=cur->next;
        break;
    }
    // head=reverselist(head);

}
display(head);



return 0;
}