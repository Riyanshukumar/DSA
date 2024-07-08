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

node *delHead(node *head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    else{
        node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
}
int main() {
    // Create a doubly linked list
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);

    // Connect the nodes
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    // Delete the head node
    head = delHead(head);

    // Print the updated list
    node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}