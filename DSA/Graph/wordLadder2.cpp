#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> findLadders(string start, string end, vector<string>& wordList){
    unordered_set<string> st(wordList.begin(), wordList.end());
    if(st.find(end) == st.end()) return {};
    queue<vector<string>> q;
    q.push({start});
    vector<vector<string>> usedOnLevel;
    usedOnLevel.push_back({start});

    int level = 0;
    vector<vector<string>> ans;
    while(!q.empty()) {
        vector<string> path = q.front();
        q.pop();

        if(path.size() > level) {
            level++;
            for(auto it : usedOnLevel) {
                st.erase(it.back());
            }
            usedOnLevel.clear();
        }
        
        string word = path.back();
        if(word == end){
            if(ans.size() == 0){
                ans.push_back(path);
            } else if(path.size() == ans[0].size()){
                ans.push_back(path);
            } 
        }

        for(int i = 0; i < word.size(); i++) {
            char c = word[i];
            for(int j = 0; j < 26; j++) {
                word[i] = 'a' + j;
                if(st.count(word) > 0){
                    path.push_back(word);
                    q.push(path);
                    usedOnLevel.push_back({word});
                    path.pop_back();
                }
            }
            word[i] = c;
        }
    }
    return ans;
}

int main() {
    string start = "hit";
    string target = "cog";
    vector<string> wordList = {"hot", "dot", "dog", "lot", "log", "cog"};
    vector<vector<string>> ans = findLadders(start, target, wordList);
    for(auto it : ans){
        for(auto i : it){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}