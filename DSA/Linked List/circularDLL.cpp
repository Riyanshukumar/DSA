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

node *insertBegin(node *head, int k){
    node *temp = new node(k);
    if(head == NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->next = head;
    temp->prev = head->prev;
    head->prev->next = temp;
    head->prev = temp;
    return temp;
}

node *insertEnd(node *head, int k){
    node *temp = new node(k);
    if(head == NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->next = head;
    temp->prev = head->prev;
    head->prev->next = temp;
    head->prev = temp;
    return head;
}

int main(){
    node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertBegin(head, 5);
    head = insertBegin(head, 2);

    node *temp = head;
    while(temp->next != head){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " ";
    return 0;
}