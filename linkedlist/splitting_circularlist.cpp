#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void display(node *head)
{
    node *temp = head->next;
    cout<<head->data<<"->";
    
    while (temp != head)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "HEAD" << endl;
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
int length(node *head)
{
    int len = 1;
    node*temp=head->next;
    
    while (temp != head)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void makeCyclicLinkedlist(node* head)
{
node * temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=head;
}
void splitlist(node * head)
{
    int len =length(head);
    
    node* temp=head;
    int mid=len/2;
    for(int i=0;i<mid;i++)
    {
        temp=temp->next;
    }
   
    node* newhead=temp->next;
    temp->next=head;
    display(head);
    node* pemp=newhead;
    
    while(pemp->next!=head)
    {
        pemp=pemp->next;
    }
    pemp->next=newhead;
    
    display(newhead);
}
int main()
{
    node* head(NULL);
    insertattail(head,5);
    insertattail(head,7);
    insertattail(head,8);
    insertattail(head,54);
    insertattail(head,58);
    makeCyclicLinkedlist(head);
    display(head);
    splitlist(head);
    return 0;}