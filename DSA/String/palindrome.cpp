#include<iostream>
#include<string.h>
using namespace std;

bool isPalindrome(string str){
    int start = 0;
    int end = str.length()-1;
    while(start < end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    string str;
    cin >> str;

    if(isPalindrome(str)){
        cout << "Yes, it is a palindrome" << endl;
    }else{
        cout << "No, it is not a palindrome" << endl;
    }

    return 0;
}