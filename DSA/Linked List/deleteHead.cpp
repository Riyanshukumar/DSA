#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x){
        data =x;
        next = NULL;
    }
};

/*node *delHead(node *head){
    if(head == NULL) return NULL;
    if(head->next == head){
        delete head;
        return NULL;
    }
    node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return curr->next;
    
}*/

node *delHead(node *head){
    if(head == NULL) return NULL;
    if(head->next == head){
        delete head;
        return NULL;
    }
    
        head->data = head->next->data;
        node *temp = head->next;
        head->next = head->next->next;
        delete temp;
        return head;
    
}

int main() {
    // Create a circular linked list
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = head; // Make it circular

    // Print the original linked list
        cout << "Original Linked List: ";
        node *temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    
        // Delete the head node
        head = delHead(head);
    
        // Print the modified linked list
        cout << "Modified Linked List: ";
        temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    
        return 0;
}

