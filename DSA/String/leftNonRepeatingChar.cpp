#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int nonRepeat(string &str){
    for(int i=0; i<str.length(); i++){
        bool flag = false;
        for (int j = 0; j < str.length(); j++)
        {
            if(i!=j && str[i]==str[j]){
                flag = true;
                break;
            }
        }
        if(!flag)
          return i;
    }
    return -1;
}*/

/*int nonRepeat(string &str){
    int count[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]-'a']++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if(count[str[i]-'a']==1)
          return i;
    }
    
    return -1;
}*/
int nonRepeat(string &str){
    int check[26];
    fill(check,check+26,-1);
    for (int i = 0; i < str.length(); i++)
    {
        if(check[str[i]-'a'] == -1){
            check[str[i]-'a'] = i;
        }
        else 
          check[str[i]-'a'] = -2;
    }
    int ans = INT_MAX;
    for (int i = 0; i < 26; i++)
    {
      if(check[i]>=0)
         ans = min(ans,check[i]);
    }
    
    return (ans == INT_MAX)? -1:ans ;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    int index = nonRepeat(str);
    if (index != -1) {
        cout << "The leftmost non-repeating character is: " << str[index] << endl;
    } else {
        cout << "There is no non-repeating character in the string." << endl;
    }
    
    return 0;
}
