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

    node *head1(NULL);

    insertattail(head1, 1);
    insertattail(head1, 2);
    insertattail(head1, 3);
    display(head1);
    node *head2(NULL);
    insertattail(head2, 4);
    insertattail(head2, 6);
    insertattail(head2, 8);
    display(head2);
    head1 = reverselist(head1);
    head2 = reverselist(head2);
    int carry = 0;
    int sum = 0;
    node *temp;
    node *res = NULL;
    node *cur = NULL;
    while (head1 != NULL || head2 != NULL)
    {
        sum = carry + (head1 ? head1->data : 0) + (head2 ? head2->data : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        temp = new node(sum);
        if (res == NULL)
            res = temp;
        else
            cur->next = temp;
        cur = temp;
        if (head1)
            head1 = head1->next;
        if (head2)
            head2 = head2->next;
    }
    if (carry > 0)
    {
        temp = new node(carry);
        cur->next = temp;
        cur = temp;
    }
    res = reverselist(res);
    display(res);
}
