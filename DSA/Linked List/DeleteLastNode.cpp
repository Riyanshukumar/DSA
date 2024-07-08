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

 node *delEnd(node *head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete (curr->next);
    curr->next = NULL;
    return head;
 }
 
int main() {
    // Create a linked list
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;

    // Print the original linked list
    cout << "Original Linked List: ";
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete the last node
    head = delEnd(head);

    // Print the modified linked list
    cout << "Modified Linked List: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}