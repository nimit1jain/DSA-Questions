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
int length(node *head)
{
    int len = 0;
    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}
int middleElement(node* head)
{
    int len=length(head);
    int mid=len/2;
    node* temp=head;
    for(int i=0;i<mid;i++)
    {
        temp=temp->next;
    }
    return temp->data;

}
int main()
{
    node* head(NULL);
    insertattail(head,5);
    insertattail(head,7);
    insertattail(head,8);
    insertattail(head,54);
    insertattail(head,58);
    
    cout<<middleElement(head)<<endl;
    return 0;
}