#include<bits/stdc++.h>
using namespace std;

void pattern(string &txt, string &pat){
    int m = pat.length();
    int n = txt.length();

    for (int i = 0; i <= n-m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
           if(pat[j]!=txt[i+j])
             break;
        }
           if(j==m)
              cout << i << " "; 
    }
    
}

int main() {
    string txt = "aaaaa";
    string pat = "aa";
    
    pattern(txt, pat);
    
    return 0;
}