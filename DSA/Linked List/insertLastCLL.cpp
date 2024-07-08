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

/*node *insertEnd(node *head, int k){
    node *temp = new node(k);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
   else{
    node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    return head;
   }
}*/

node *insertEnd(node *head, int k){
    node *temp = new node(k);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
    }
    
}

int main() {
    node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    // Print the circular linked list
    node *temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    return 0;
}