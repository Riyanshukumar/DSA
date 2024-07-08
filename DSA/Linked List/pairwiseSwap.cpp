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

/*node *pairSwap(node *head){
    node *curr = head;
    while (curr!=NULL && curr->next!=NULL)
    {
        swap(curr->data, curr->next->data);
        curr = curr->next->next;
    }
    return head;
}*/
node *pairSwap(node *head){
    if(head == NULL && head->next == NULL)
       return head;

    node *curr = head->next->next;
    node *prev = head;
    head = head->next;
    head->next = prev;

    while (curr!=NULL && curr->next!=NULL)
    {
        prev->next = curr->next;
        prev = curr;
        node *next = curr->next->next;
        curr->next->next = curr;
        curr = next;
    }
       prev->next = curr;
       return head;
}

void print(node *head){
    node *curr = head;
    while (curr!=NULL)
    {
       cout << curr->data << " ";
       curr = curr->next; 
    }
    
}

int main() {
    // Create a linked list
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    cout << "Original Linked List: ";
    print(head);

    // Perform pairwise swapping
    head = pairSwap(head);

    cout << "\nLinked List after pairwise swapping: ";
    print(head);

    // Clean up memory
    node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}