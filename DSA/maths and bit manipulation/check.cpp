#include<bits/stdc++.h>
using namespace std;

void generatePowerSet(const string& s, string current, int idx, vector<string>& result) {
    
    if (idx == s.length()) {
        
        result.push_back(current); 
        return;
    }
    
    generatePowerSet(s, current, idx + 1, result);
    generatePowerSet(s, current+s[idx], idx + 1, result);
}

int main(){
    string s;
    cin >> s;
    vector<string>result;

    generatePowerSet(s,"",0,result);

    for (const string& subset : result) {
        cout << subset << endl;
    }
    

    return 0;
}