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

/*node *revLL(node *head){
    vector<int>arr;
    for(node *curr=head; curr!=NULL; curr=curr->next){
        arr.push_back(curr->data);
    }

    for(node *curr=head; curr!=NULL; curr=curr->next){
        curr->data = arr.back();
        arr.pop_back();
    }

    return head;
}*/
node *revLL(node *head){
   // node *nxt = head;
    node *prev = NULL;
    node *curr = head;
    while (curr!=NULL)
    {
        node *nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}

int main() {
    // Create a linked list
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    // Print the original linked list
    cout << "Original Linked List: ";
    for (node *curr = head; curr != NULL; curr = curr->next) {
        cout << curr->data << " ";
    }
    cout << endl;

    // Reverse the linked list
    head = revLL(head);

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    for (node *curr = head; curr != NULL; curr = curr->next) {
        cout << curr->data << " ";
    }
    cout << endl;

    // Delete the linked list to free memory
    node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
