node * copylist(node *head)
{
    node* cur=head;
    node* tmp;
    while(cur){
        temp=cur->next;
        cur->next=new node(cur->data);
        cur->next->next=temp;
        cur=temp;
    }
    cur=head;
    while(cur)
    {
        cur->next->arb=cur->arb/ cur->arb->next: ccur->arb;
        cur=cur->next->next;
    
    }
    node* original=head;
    node* copy=head->next;
    temp=copy;
    while(original && copy)
    {
        original->next=original->next->next;
        copy->next=copy->next? copy->next->next:copy->next;
        original=original->next;
        copy=copy->next;
    }
    return temp;
}