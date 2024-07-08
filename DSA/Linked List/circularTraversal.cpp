#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data ;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

/*void print(node *head){
    if(head == NULL) return;
    cout << head->data <<" ";
    for(node *p = head->next; p!=head; p = p->next){
        cout << p->data << " ";
    }
}*/

void print(node *head){
    if(head == NULL) return;
    node *p = head;
    do
    {
        cout << p->data <<" ";
        p = p->next;
    } while (p!=head);
    
}

int main() {
    // Creating a circular linked list with three nodes
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);

    head->next = second;
    second->next = third;
    third->next = head;

    // Printing the circular linked list
    print(head);

    return 0;
}