#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   node *prev;
   node *next;
   node(int x){
    data = x;
    prev = NULL;
    next = NULL;
   }
};

node *reverseDLL(node *head){
    if(head == NULL || head->next == NULL) return head;

    node *rev = NULL, *curr = head;
    while(curr != NULL){
        rev = curr->prev;
        curr->prev = curr->next;
        curr->next = rev;
        curr = curr->prev;
    }
    return rev->prev;
}

int main() {
    // Create a doubly linked list
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    // Print the original list
    cout << "Original List: ";
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Reverse the doubly linked list
    head = reverseDLL(head);

    // Print the reversed list
    cout << "Reversed List: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Clean up memory
    temp = head;
    while (temp != NULL) {
        node *next = temp->next;
        delete temp;
        temp = next;
    }

    return 0;
}