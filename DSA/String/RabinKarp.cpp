#include<bits/stdc++.h>
using namespace std;

void RabinKarp(string &txt, string &pat){
    int m = pat.length();
    int n = txt.length();
    int d = 256;
    int q = 101;
    int h = 1;
    int p = 0;
    int t = 0;
    
    for (int i = 0; i < m-1; i++)
    {
        h = (h*d)%q;
    }
    
    for (int i = 0; i < m; i++)
    {
        p = (d*p + pat[i])%q;
        t = (d*t + txt[i])%q;
    }
    
    for (int i = 0; i <= n-m; i++)
    {
        if(p==t){
            int j;
            for (j = 0; j < m; j++)
            {
                if(pat[j]!=txt[i+j])
                  break;
            }
            if(j==m)
               cout << i << " ";
        }
        
        if(i<n-m){
            t = (d*(t-txt[i]*h) + txt[i+m])%q;
            if(t<0)
              t = t+q;
        }
    }
}

int main() {
    string txt = "aaaaa";
    string pat = "aa";
    
    RabinKarp(txt, pat);
    
    return 0;
}