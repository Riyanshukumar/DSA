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

node *deleteKthnode(node *head, int k){
    if(head == NULL){
        return NULL;
    }
    if(k == 1){
        node *curr = head;
        while(curr->next != head){
            curr = curr->next;
        }
        node *temp = head;
        if(head == head->next){
            delete temp;
            return NULL;
        }
        curr->next = head->next;
        delete temp;
        return curr->next;
    }
    node *curr = head;
    for(int i=0; i<k-2; i++){
        curr = curr->next;
    }
    node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

void print(node *head){
    if(head == NULL){
        return;
    }
    node *curr = head;
    do{
        cout << curr->data << " ";
        curr = curr->next;
    }while(curr != head);
}

int main(){
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;
    head = deleteKthnode(head, 1);
    print(head);
    return 0;
}