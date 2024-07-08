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

void print(node *head){
    if(head == NULL)
       return;

    cout << head->data <<" ";
    print(head->next);   
}

int main() {
    // Create a linked list
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);

    head->next = second;
    second->next = third;

    // Print the linked list
    print(head);

    return 0;
}