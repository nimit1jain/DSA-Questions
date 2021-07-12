#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class node{
public:
int data;
node* next;
node(int value)
{
    data=value;
    next=NULL;
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
int multi(node* head)
{int len=length(head);
int num=0;
    while(head!=NULL)
    {
        num=num+(head->data)*pow(10,len-1);
        len--;
        head=head->next;
    }
    return num;

}
int main()
{
    node*  head(NULL);
    insertattail(head,4);
    insertattail(head,1);
    insertattail(head,6);
    node* head2(NULL);
    insertattail(head2,2);
    insertattail(head2,3);
    int num1=multi(head);
    int num2=multi(head2);
    int ans=num1*num2;
    cout<<ans;
    

}