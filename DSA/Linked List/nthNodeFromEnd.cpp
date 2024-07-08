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

/*void Nthnode(node *head, int n){
    int len = 0;
    for(node *curr=head; curr!=NULL; curr=curr->next)
       len++;

    if(len<n) return;

    node *curr = head;
    for (int i = 1; i < len-n+1; i++)
    {
        curr = curr->next;
    }
       cout << (curr->data) << " ";
}*/
void Nthnode(node *head, int n){
   if(head == NULL) return;
   
    node *second = head;
    node *first = head;
    for (int i = 0; i < n; i++)
    {   if(first == NULL) return;
        first = first->next;
    }
    while (first!=NULL)
    {
        second = second->next;
        first = first->next;
    }
    cout << (second->data) ;
}

int main() {
    // Create a linked list
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    int n = 2; // Specify the value of n

    // Call the Nthnode function
    Nthnode(head, n);

    return 0;
}
