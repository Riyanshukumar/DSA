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

node *delHead(node *head){
    if(head==NULL){
         return NULL;
    }
    else {
        node *temp = head->next; 
        delete head;
        return temp;
    }
}
int main() {
    // Create a linked list
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);

    // Delete the first node
    head = delHead(head);

    // Print the updated linked list
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
