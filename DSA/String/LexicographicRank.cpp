#include<bits/stdc++.h>
using namespace std;

int lexRank(string &str){
    int n = str.length();
    int mul = 1;
    int rank = 1;
    int count[256] = {0};
    int fact[n+1];
    fact[0] = 1;
    for(int i=1; i<=n; i++){
        fact[i] = fact[i-1]*i;
    }
     mul = fact[n];

    for(int i=0; i<n; i++){
        count[str[i]]++;
    }
    for(int i=1; i<256; i++){
        count[i] += count[i-1];
    }
    for(int i=0; i<n-1; i++){
        mul = mul/(n-i);
        rank += count[str[i]-1]*mul;
        for(int j=str[i]; j<256; j++){
            count[j]--;
        }
    }
    return rank;
}

int main(){
    string str;
    cin >> str;

    cout << lexRank(str) << endl;

    return 0;
}



