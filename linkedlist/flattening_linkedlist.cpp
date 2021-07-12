// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*  next;
//     node* bottom;
//     node(int value){
//         data=value;
//         next=NULL;
//         bottom=NULL;
//     }
// };
// void insertattail(node *&head, int value)
// {
//     node *n = new node(value);
//     node *temp = head;
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }
// void insertinbottom(node* head,int value)
// {
//     node* n=new node(value);
//     node* temp=head;
//     if(head==NULL)
//     {
//         head=n;
//     }
//     else
//     while(temp->bottom!=NULL)
//     {
//         temp=temp->bottom;
//     }
//     temp->bottom=n;
// }
// int main()
// {node* head1(NULL);
// insertattail(head1,5);
// insertinbottom(head1,7);
// insertinbottom(head1,8);
// insertinbottom(head1,30);

// insertattail(head1,10);
// insertinbottom(head1,5);


// }
Node *merge(Node* a,Node* b)
{if (a==NULL) return b;
if (b==NULL) return a;
Node* result;
if(a->data<b->data)
{
    result=a;
    result->bottom=merge(a,b->bottom);
}
else {
    result=b;
    result->bottom=merge(a,b->bottom);
}
result->next=NULL;
return result;
}
Node *flattenlist(Node *root)
{
    if(root==NULL||root->next==NULL)
    return root;
    return merge(root,flattenlist(root->next));
}