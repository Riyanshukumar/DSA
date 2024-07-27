#include<bits/stdc++.h>
using namespace std;

// Function to check if two words differ by exactly one character
int wordLadderLength(string start, string target, vector<string> &wordList) {
    queue<pair<string, int>> q;
    q.push({start, 1});
    unordered_set<string> st(wordList.begin(), wordList.end());
    st.erase(start);
    while(!q.empty()) {
        string word = q.front().first;
        int len = q.front().second;
        q.pop();
        if(word == target) return len;
        for(int i = 0; i < word.size(); i++) {
            char c = word[i];
            for(int j = 0; j < 26; j++) {
                word[i] = 'a' + j;
                if(st.find(word) != st.end()) {
                    q.push({word, len + 1});
                    st.erase(word);
                }
            }
            word[i] = c;
        }
    }
    return 0;
}

int main() {
    string start = "hit";
    string target = "cog";
    vector<string> wordList = {"hot", "dot", "dog", "lot", "log", "cog"};
    cout << wordLadderLength(start, target, wordList) << endl;
    return 0;
}