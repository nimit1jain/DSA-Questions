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
node* reverseNnode(node* &head,int n)
{
    node* end=head;
    while(end->next!=NULL)
    {
        end=end->next;
    }
    node* previous;
    node* temp=head;
    for (int i=1;i<=n;i++)
    {previous=temp;
        temp=temp->next;

    }
    end->next=head;
    head->prev=end;
    
    previous->next=NULL;
    temp->prev=NULL;
    head=temp;
    return head;

    


}
int main()
{
    node *head(NULL);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 7);
    insertattail(head, 9);
    insertattail(head, 11);
    display(head);
    cout<<"fromwhere you want to rotate";
    int n;
    cin>>n ;
    head=reverseNnode(head,n);
    display(head);
    return 0;
}