#include<bits/stdc++.h>
using namespace std;

/*bool isAnagram(string &pat, string &txt, int i){
      int count[256] = {0};
        for(int j=0; j<pat.length(); j++){
            count[pat[j]]++;
            count[txt[i+j]]--;
        }
        for(int j=0; j<256; j++){
            if(count[j]!=0)
                return false;
        }
        return true;
}
bool search(string &txt, string &pat) {
    int n = txt.length();
    int m = pat.length();
    for(int i=0; i<=n-m; i++){
        if(isAnagram(pat, txt, i))
            return true;
    }
    return false;
}*/
bool compare(int ct[], int cp[]) {
    for (int i = 0; i < 256; i++) {
        if (ct[i] != cp[i]) {
            return false;
        }
    }
    return true;
}

bool search(string &txt, string &pat){
    int ct[256] = {0};
    int cp[256] = {0};
    for(int i=0; i<pat.length(); i++){
        ct[txt[i]]++;
        cp[pat[i]]++;
    }
    for(int i=pat.length(); i<txt.length(); i++){
        if(compare(ct, cp))
            return true;
            
        ct[txt[i]]++;
        ct[txt[i-pat.length()]]--;
    }
    return false;
}

int main(){
    string txt, pat;
    cin >> txt >> pat;

    if(search(txt, pat)){
        cout << "Yes, it is an anagram" << endl;
    }else{
        cout << "No, it is not an anagram" << endl;
    }

    return 0;
}