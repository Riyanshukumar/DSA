#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
    node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

node *insert(node *head, int k){
    node *temp = new node(k);
    temp->next = head;
    if(head != NULL)
        head->prev = temp;
    return temp;    
}

int main() {
    node *head = NULL;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    
    // Print the doubly linked list
    node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    
    return 0;
}