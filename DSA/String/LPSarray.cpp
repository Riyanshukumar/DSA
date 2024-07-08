#include<bits/stdc++.h>
using namespace std;

vector<int> properpresuff(string &s){
    int n = s.length();
    vector<int> lps(n);
    lps[0] = 0;
    int len = 0;
    int i = 1;
    while(i<n){
        if(s[i]==s[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len!=0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

int main() {
    string s = "abacabadabacaba";
    vector<int> lps = properpresuff(s);
    for(int i=0; i<lps.size(); i++){
        cout << lps[i] << " ";
    }
    return 0;
}