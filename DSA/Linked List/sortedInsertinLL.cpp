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

node *sortedInsert(node *head, int k){
    node *temp = new node(k);
    if(head == NULL) return NULL;
    if(head->data > k){
        temp->next = head;
        return temp;
    }

    node *curr = head;
    while (curr->next->data<k && curr->next!=NULL)
    {
        curr = curr->next;
    }
    if(curr->next == NULL){
        curr->next = temp;
    }
    else{
    temp->next = curr->next;
    curr->next = temp;
    }
    return head;
}

int main() {   
    // Create a linked list with some initial elements
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);

    // Call the sortedInsert function to insert a new element
    int k = 25;
    head = sortedInsert(head, k);

    // Print the updated linked list
    node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}
