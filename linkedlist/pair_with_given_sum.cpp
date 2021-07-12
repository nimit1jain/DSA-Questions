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
void pairmatch(node *head, int k)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *pemp = head;
    while (pemp->next != temp->prev)
    {
        if ((pemp->data + temp->data) > k)
        {
            temp = temp->prev;
        }
        else if ((pemp->data + temp->data) < k)
            pemp = pemp->next;
        else
        {
            cout << "( " << pemp->data << "," << temp->data << " )" << endl;
            pemp = pemp->next;
        }
    }
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
    int k;
    cout << "enter the sum" << endl;
    cin >> k;
    pairmatch(head, k);
    return 0;
}