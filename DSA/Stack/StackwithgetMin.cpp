#include<bits/stdc++.h>
using namespace std;

class Stack{
    stack<int>s;
    int minEle;
public:
    void push(int x){
        if(s.empty()){
            s.push(x);
            minEle = x;
        }
        else if(x>=minEle){
            s.push(x);
        }
        else{
            s.push(2*x-minEle);
            minEle = x;
        }
    }

    int pop(){
        if(s.empty()){
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        if(s.top()>=minEle){
            int res = s.top();
            s.pop();
            return res;

        }
        else{
            int res = minEle;
            minEle = 2*minEle-s.top();
            s.pop();
            return res;
        }
    }

    int top(){
        if(s.empty()){
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        if(s.top()>=minEle){
            return s.top();
        }
        else{
            return minEle;
        }
    }

    int getMin(){
        if(s.empty()){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return minEle;
    }
};

int main() {
    Stack s;
    s.push(3);
    s.push(5);
    cout << s.getMin() << endl;
    s.push(2);
    s.push(1);
    cout << s.getMin() << endl;
    cout << s.pop() << endl;
    cout << s.getMin() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.getMin() << endl;
    return 0;
}  