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

/*int search(node *head, int k){
    node *curr = head;
    int pos = 1;

    while (curr != NULL)
    {
        if(curr->data == k)
            return pos;
        else{
            pos++;
            curr = curr->next;
        }    
    }
    
    return -1;
}*/

int search(node *head, int key){
    
    if(head == NULL) return -1;
    if(head->data == key) return 1;

    int ans = search(head->next, key);
    if(ans == -1) return -1;
    else return (ans+1);
}

int main() {
    // Create a linked list
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(4);
    node *fifth = new node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Search for an element in the linked list
    int key = 3;
    int position = search(head, key);

    if (position == -1) {
        cout << "Element not found in the linked list" << endl;
    } else {
        cout << "Element found at position: " << position << endl;
    }

    // Free the memory
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}