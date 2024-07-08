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

/*bool isPalindrome(node *head){
    stack<int> s;
    for(node *curr = head; curr!=NULL; curr=curr->next){
        s.push(curr->data);
    }
    for(node *curr = head; curr!=NULL; curr=curr->next){
        if(s.top()!=curr->data){
            return false;
        }
        s.pop();
    }
    return true;
}*/

bool isPalindrome(node *head){
    node *slow = head, *fast = head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    node *prev = NULL, *curr = slow, *next = NULL;
    while (curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    node *curr1 = head, *curr2 = prev;
    while (curr2!=NULL)
    {
        if(curr1->data != curr2->data){
            return false;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return true;
}   

int main(){
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(20);
    head->next->next->next->next = new node(10);
    cout << isPalindrome(head);
    return 0;
}