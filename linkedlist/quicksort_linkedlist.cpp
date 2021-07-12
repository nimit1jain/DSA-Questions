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
node *partition(node *&head, node *start, node *pivot)
{
    node *first = start;
    node *pindex = start;
    while (first != pivot)
    {

        if (first->data < pivot->data)
        {

            int a = first->data;
            int b = pindex->data;
            first->data = b;
            pindex->data = a;
            pindex = pindex->next;
        }
        first = first->next;
    }

    int a = pindex->data;
    int b = pivot->data;
    pindex->data = b;
    pivot->data = a;
    return pindex;
}
node *quicksort(node *head, node *start, node *end)
{ 
    node *pindex;
    if (start < end)
    {

        pindex = partition(head, start, end);

        quicksort(head, pindex->next, end);
        quicksort(head, start, pindex->prev);
       
    }
    return head;
}void insertathead(node *&head, int value)
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
int main()
{
    node *head(NULL);
    insertattail(head, 3);
    insertattail(head, 2);
    insertattail(head, 4);
    insertattail(head, 1);
    insertattail(head, 6);
    insertattail(head, 5);
    node *start = head;
    node *end = head;
    while (end->next != NULL)
    {
        end = end->next;
    }
    
    quicksort(head, start, end);
    display(head);
    return 0;
}