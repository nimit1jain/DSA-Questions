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
void insertinbetween(node *head, int value, int index)
{
    node *n = new node(value);
    int i = 0;

    while (i != index)
    {
        head = head->next;
        i++;
    }
    n->next = head->next;
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
void checkpalindrome(node* head)
{
    node* temp=head;
    node* newhead(NULL);
    while(temp!=NULL)
    {
        insertattail(newhead,temp->data);
        temp=temp->next;
    }
    display (newhead);
    head=reverselist(head);
    display(head);
    temp=head;
    node* pemp=newhead;
    while(temp!=NULL&&pemp!=NULL)
    {
        if(temp->data!=pemp->data)
        {
            cout<<"not a palindrome"<<endl;
        }
        temp=temp->next;
        pemp=pemp->next;
    }
    cout<<"its a palindromic list"<<endl;


}

// this approach is of order n space 
// find iddle and reverse list after middle in place and then check
int main()
{
    node* head(NULL);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,6);
    insertattail(head,4);
    insertattail(head,3);
    checkpalindrome(head);
   return 0;

}