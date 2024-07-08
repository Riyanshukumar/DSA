#include<bits/stdc++.h>
using namespace std;

bool matching(char a, char b){
    return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}

bool isBalanced(string str){
    stack<char>s;

    for(char x : str){
        if(x=='('||x=='{'||x=='[')
          s.push(x);
        else
        {
          if(s.empty()==true)
             return false;
          if(!matching(s.top(),x))    
             return false;
          else 
            s.pop(); 
        }     
    }
    return(s.empty()==true);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isBalanced(str)) {
        cout << "The string is balanced." << endl;
    } else {
        cout << "The string is not balanced." << endl;
    }

    return 0;
}