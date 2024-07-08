#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int leftRepeating(string &str){
    int check[26] ;
    fill(check, check+26, -1);
    int ans = INT_MAX;
    for (int i = 0; i < str.length(); i++)
    {
        if(check[str[i]-'a'] == -1){
            check[str[i]-'a'] = i;
        }
        else
            ans = min(ans, check[str[i]-'a']);
    }
    return (ans == INT_MAX) ? -1 : ans;
}*/

int leftRepeating(string &str){
    bool check[26];
    fill(check, check+26, false);
    int ans = -1;
    for(int i=str.length()-1; i>=0; i--){
        if(check[str[i]-'a'])
           ans = i;
        else 
            check[str[i]-'a'] = true;   
    }
    return ans;
}

int main(){
    string str;
    cin >> str;
    cout << leftRepeating(str) << endl;
    return 0;
}