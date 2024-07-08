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

/*node *reverseK(node *head, int k){
    node *curr = head, *next = NULL, *prev = NULL;
    int count = 0;
    while (curr!=NULL && count<k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next!=NULL)
    {
        node *rest_head = reverseK(next,k);
        head->next = rest_head;
    }
    return prev;
}*/

node *reverseK(node *head, int k){
    node *curr = head, *prevFirst = NULL;
    bool isFirstPass = true;
    while (curr!=NULL)
    {
        node *first = curr, *prev = NULL;
        int count = 0;
        while (curr!=NULL && count<k)
        {
            node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(isFirstPass){
            head = prev;
            isFirstPass = false;
        }
        else{
            prevFirst->next = prev;
        }
        prevFirst = first;
    }
    return head;
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
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Reverse the linked list in groups of size k
    int k = 3;
    head = reverseK(head, k);

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}