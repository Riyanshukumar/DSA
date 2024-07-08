#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data ;
  node *prev;
  node *next;
  node(int x){
    data = x;
    prev = NULL;
    next = NULL;
  }
};

node *insertEnd(node *head, int k){
    
    node *temp = new node(k);
    if(head == NULL) return temp;

    node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;

    return head;
}

int main() {
    node *head = NULL;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        head = insertEnd(head, x);
    }
    // Display the linked list
    cout << "Linked List: ";
    node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    return 0;
}
