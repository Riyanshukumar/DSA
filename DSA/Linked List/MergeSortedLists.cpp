#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

node *merge(node *head1, node *head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    node *temp = NULL;
    node *curr = temp;
    if(head1->data <= head2->data){
        temp = head1;
        curr = head1;
        head1 = head1->next;
    }
    else{
        temp = head2;
        curr = head2;
        head2 = head2->next;
    }

    while (head1!=NULL && head2!=NULL)
    {
        if(head1->data <= head2->data){
            curr->next = head1;
            curr = curr->next;
            head1 = head1->next;
        }
        else{
            curr->next = head2;
            curr = curr->next;
            head2 = head2->next;
        }
    }
    if(head1!=NULL){
        curr->next = head1;
    }
    if(head2!=NULL){
        curr->next = head2;
    }
    return temp;
}
void print(node *head){
    node *curr = head;
    while (curr!=NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main(){
    node *head1 = new node(10);
    head1->next = new node(20);
    head1->next->next = new node(30);
    head1->next->next->next = new node(40);
    node *head2 = new node(5);
    head2->next = new node(15);
    head2->next->next = new node(25);
    head2->next->next->next = new node(35);
    print(head1);
    cout << endl;
    print(head2);
    cout << endl;
    node *head = merge(head1, head2);
    print(head);
    return 0;
}