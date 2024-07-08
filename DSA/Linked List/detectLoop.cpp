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
/*bool isloop(node *head){
    unordered_set<node *> s;
    for(node *curr = head; curr!=NULL; curr = curr->next){
        if(s.find(curr) != s.end()){
            return true;
        }
        s.insert(curr);
    }
    return false;
}*/
bool isloop(node *head){
    node *temp = new node(0);
    node *curr = head;
    while (curr!=NULL)
    {
        if(curr->next == NULL){
            return false;
        }
        if(curr->next == temp){
            return true;
        }
        node *curr_next = curr->next;
        curr->next = temp;
        curr = curr_next;
    }

}

int main(){
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = head;
    cout << isloop(head);
    return 0;
}