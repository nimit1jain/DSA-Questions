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
void findmiddle(node *current, node *&first, node *&second)
{
    node *fast;
    node *slow = current;

    fast = current->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }
    first = current;
    second = slow->next;
    slow->next = NULL;
}
node *mergeboth(node *first, node *second)
{
    node *answer = NULL;
    if (first==NULL)
        return second;
    else if (second==NULL)
        return first;
    if (first->data <= second->data)
    {
        answer = first;
        answer->next = mergeboth(first->next, second);
    }
    else
    {
        answer = second;
        answer->next = mergeboth(first, second->next);
    }
    return answer;
}
node *mergesort(node *&head)
{
    node *current = head;
    node *first;
    node *second;
    if (current==NULL || current->next==NULL)
        return head;
    findmiddle(current, first, second);
    mergesort(first);
    mergesort(second);
    head = mergeboth(first, second);
    return head;
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
int main()
{
    node *head(NULL);
    insertattail(head, 34);
    insertattail(head, 4);
    insertattail(head, 23);
    insertattail(head, 1);
    insertattail(head, 77);
    insertattail(head, 3);
    display(head);
    head = mergesort(head);
    display(head);
    return 0;
}
