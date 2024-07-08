#include<bits/stdc++.h>
using namespace std;

//stack  is last in first out data structure

struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x){
        if(top == cap-1){
            cout<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    int pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool empty(){
        return top == -1;
    }
};


int main(){
    /*stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    return 0;*/

    mystack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    return 0;

}