#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *random;
    node(int x){
        data = x;
        next = NULL;
        random = NULL;
    }
};

/*node *clone(node *head){
    unordered_map<node*, node*> mp;
    node *curr = head;
    while (curr!=NULL)
    {
        mp[curr] = new node(curr->data);
        curr = curr->next;
    }   
    curr = head;
    while (curr!=NULL)
    {
        mp[curr]->next = mp[curr->next];
        mp[curr]->random = mp[curr->random];
        curr = curr->next;
    }
    return mp[head];
}*/
node *clone(node *head){
    node *curr = head;
    while (curr!=NULL)
    {
        node *temp = new node(curr->data);
        temp->next = curr->next;
        curr->next = temp;
        curr = temp->next;
    }
    curr = head;
    while (curr!=NULL)
    {
        curr->next->random = (curr->random!=NULL) ? curr->random->next : NULL;
        curr = curr->next->next;
    }
    node *original = head, *copy = head->next;
    node *temp = copy;
    while (original!=NULL && copy!=NULL)
    {
        original->next = original->next->next;
        copy->next = (copy->next!=NULL) ? copy->next->next : NULL;
        original = original->next;
        copy = copy->next;
    }
    return temp;
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
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next->next->next;
    head->next->next->next->random = head->next;

    node *cloned = clone(head);
    print(cloned);
    return 0;
}