#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *next;
    int data;

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

void deletinghead(node *&head)

{
    node *firstdelete = head;
    head = head->next;
    delete firstdelete;
}

void deleting(node *&head, int value)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deletinghead(head);
    }
    node *temp = head;
    while (temp->next->data != value)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void segregate(node *&head)
{
    node *temp = head;
    int i = 0;
    while (i < 8)
    {

        if (temp->data == 2)
        {
            temp = temp->next;
            deleting(head, 2);
            insertattail(head, 2);
        }
        else if (temp->data == 0)
        {
            temp = temp->next;
            deleting(head, 0);
            insertathead(head, 0);
        }
        else
        {
            temp = temp->next;
        }
        i++;
    }
}
int main()
{

    node *head(NULL);
    insertattail(head, 1);
    insertattail(head, 2);

    insertattail(head, 2);
    insertattail(head, 1);
    insertattail(head, 0);
    insertattail(head, 1);
    insertattail(head, 0);
    insertattail(head, 0);
    display(head);
    segregate(head);
    display(head);
    return 0;
}