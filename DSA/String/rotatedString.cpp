#include<bits/stdc++.h>
using namespace std;

bool isRotated(string &s1, string &s2){
    if(s1.length()!=s2.length()) return false;

    return ((s1+s2).find(s2) != string::npos);
}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    if (isRotated(s1, s2)) {
        cout << "The second string is a rotated version of the first string." << endl;
    } else {
        cout << "The second string is not a rotated version of the first string." << endl;
    }

    return 0;
}