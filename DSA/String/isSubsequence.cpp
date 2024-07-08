#include<iostream>
#include<string.h>
using namespace std;

/*bool isSubseq(string &s1, string &s2){
    int n = s1.length();
    int m = s2.length();
    int i=0;

    for(int j=0; j<m; j++){
        char check = s2[j];
        for(; i<n; i++){
            if(s1[i]==check)
                break;
        }
        if(i==n)
            return false;

    }
    return true;
}*/
bool isSubseq(string &s1, string &s2, int n, int m){
    if(m==0)
      return true;

    if(n==0)
      return false;

    if(s1[n-1]==s2[m-1])
       return isSubseq(s1, s2, n-1, m-1);
    else
         return isSubseq(s1, s2, n-1, m);   

}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    if(isSubseq(s1, s2, s1.length(), s2.length())){
        cout << "Yes, it is a subsequence" << endl;
    }else{
        cout << "No, it is not a subsequence" << endl;
    }

    return 0;
}