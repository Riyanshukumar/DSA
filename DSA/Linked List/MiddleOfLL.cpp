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

/*void middle(node *head){
    if(head == NULL) return;
    int count = 0;
    node *curr;
    for(curr=head; curr!=NULL; curr=curr->next)
       count++;

    curr = head;
    for (int i = 0; i < count/2; i++)
    {
        curr=curr->next;
    }
       cout<<curr->data;
}*/
void middle(node *head){
    if(head==NULL) return;

    node *slow = head;
    node *fast = head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast= fast->next->next;
    }
    cout << (slow->data) ;
}

int main() {
    // Create a linked list
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    // Call the middle function
    middle(head);

    return 0;
}