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


struct mystack{
   node *head;
    int sz;
    mystack(){
        head = NULL;
        sz = 0;
    }
    void push(int x){
        node *temp = new node(x);
        temp->next = head;
        head = temp;
        sz++;
    }
    int pop(){
        if(head == NULL){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        int res = head->data;
        node *temp = head;
        head = head->next;
        delete temp;
        sz--;
        return res;
    }
    int peek(){
        if(head == NULL){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return head->data;
    }
    int size(){
        return sz;
    }
};

int main(){
    mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    return 0;
}