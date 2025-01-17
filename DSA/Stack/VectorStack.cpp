#include<bits/stdc++.h>
using namespace std;

struct mystack{
    vector<int> v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }
    int peek(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
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
    cout<<s.empty()<<endl;
    return 0;
}