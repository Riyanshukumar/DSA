#include<bits/stdc++.h>
using namespace std;

struct node{
    int data ;
    node *prev;
    node *next;
    node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

node *delEnd(node *head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
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

    // Delete the last node
    head = delEnd(head);

    // Print the updated list
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}