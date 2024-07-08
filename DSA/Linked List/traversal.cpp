#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void print(node *head){
    node *curr = head;
    while(curr!=NULL){
        cout << curr->data <<" ";
        curr = curr->next;
    }
}

int main(){
    node *head = new node(10);
    head->next = new node(25);
    head->next->next = new node(34);
    head->next->next->next = new node(50);

    print(head);
    return 0;
}