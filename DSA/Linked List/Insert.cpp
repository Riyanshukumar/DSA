#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
};

node* insert(node *head, int pos, int data){
     node *temp = new node(data);
     if(pos == 1)
     {
        temp->next = head;
        return temp;
     }
     node *curr = head;
     for (int i = 1; i<=pos-2 && curr!=NULL; i++)
     {
        curr = curr->next;
     }
     if(curr == NULL)
        return head;

     temp->next = curr->next;
     curr->next = temp;   
     return head;
}

int main() {
    node *head = new node(10);
    head->next = new node(35);
    head->next->next = new node(25);
    head = insert(head, 1, 20);
    head = insert(head, 3, 30);
    head = insert(head, 2, 40);
    
    // Print the linked list
    node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    
    return 0;
}