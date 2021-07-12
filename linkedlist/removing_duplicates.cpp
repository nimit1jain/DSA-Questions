#include <iostream>
#include <map>
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

node *removeduplicates(node *&head)
{
    map<int, int> mp;
    node *cur = head;
    mp[cur->data]=1;
    node *prev = cur;
    cur = cur->next;
    while (cur != NULL)
    {
        if (mp[cur->data])
        {
            prev->next = cur->next;
            free(cur);
        }
        else
        {
            mp[cur->data] = 1;
            prev = cur;
        }
        cur = prev->next;
    }
    return head;
}
int main()
{
    node *head(NULL);
    insertattail(head, 2);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 12);
    insertattail(head, 12);
    insertattail(head, 12);
    insertattail(head, 45);
    node *temp = head;
    // while (temp->next != NULL)
    // {
    //     if (temp->data == temp->next->data)
    //     {
    //         temp->next = temp->next->next;
    //     }
    //     else
    //         temp = temp->next;
    // }
removeduplicates(head);
    display(head);
    return 0;
}

// it was if the list is not sorted
