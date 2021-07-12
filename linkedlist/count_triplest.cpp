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
void triplets(node* head,int k)
{
    node* first=head;
    node*last=head;
    node* second=first->next;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    node* last1=last;
    while(second->next!=NULL)
{    
        while(second!=last)
        {
            if((first->data+second->data+last->data)>k)
            {
                last=last->prev;
            }
            else if((first->data+second->data+last->data)<k)
            {
                second=second->next;
            }
            else  
            {
                cout<<"( "<<first->data<<","<<second->data<<","<<last->data<<" )"<<endl;
                second=second->next;
            }
        }
        first=first->next;
        second=first->next;
        last=last1;
    }


}
int main()
{
    node* head(NULL);
    insertattail(head, 1);
    insertattail(head, 2);
    
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);
    
    insertattail(head, 8);
    insertattail(head, 9);
    int k;
    cout<<"enter the  sum"<<endl;
    cin>>k;

triplets(head,k);
    return 0;
}