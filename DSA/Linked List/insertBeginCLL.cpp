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

/*node *insert(node *head, int k){
    node *temp = new node(k);
    if(head == NULL)
      temp->next = temp;
    else{
       node *curr = head;
       while (curr->next != head)
       {
         curr = curr->next;
       }
        curr->next = temp;
        temp->next = head;
    }  
    return temp;
}*/

node *insert(node *head, int x){
    node *temp = new node(x);
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
        return head;
    }
    
}

int main() {
    node *head = NULL;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    // Print the circular linked list
    node *curr = head;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    return 0;
}