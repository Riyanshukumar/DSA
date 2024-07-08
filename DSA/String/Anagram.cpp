#include<iostream>
#include<string.h>
using namespace std;

bool isAnagram(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    if(n!=m)
        return false;
    int count[26] = {0};
    for(int i=0; i<n; i++){
        count[s1[i]-'a']++;
        count[s2[i]-'a']--;
    }
    for(int i=0; i<26; i++){
        if(count[i]!=0)
            return false;
    }
    return true;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    if(isAnagram(s1, s2)){
        cout << "Yes, it is an anagram" << endl;
    }else{
        cout << "No, it is not an anagram" << endl;
    }

    return 0;
}