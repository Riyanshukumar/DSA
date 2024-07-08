#include<iostream>
#include<string.h>
using namespace std;

string reverse(string str){
     string ans = "";
     for(int i=0; i<str.length(); i++){
        ans = str[i] + ans;
     }
        return ans;
}

int main(){
    string str;
    cin >> str;

    string result = reverse(str);
    cout << result << endl;

    return 0;
}