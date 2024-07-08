#include<bits/stdc++.h>
using namespace std;

void reverseWords(char str[], int n){
    int start = 0;
    for (int end = 0; end < n; end++)
    {
        if(str[end]==' '){
            reverse(str+start, str+end);
            start = end+1;
        }
    }
    reverse(str+start, str+n);
    reverse(str, str+n);
    
}

int main(){
    char str[] = "i like this program very much";
    int n = sizeof(str)/sizeof(str[0]);
    reverseWords(str, n-1);
    cout << str << endl;
    return 0;
}