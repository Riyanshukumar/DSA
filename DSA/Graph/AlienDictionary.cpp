#include<bits/stdc++.h>
using namespace std;

string findOrder(string dict[], int N, int K) {
    vector<int> adj[K];
    for(int i=0; i<N-1; i++){
        string word1 = dict[i];
        string word2 = dict[i+1];
        for(int j=0; j<min(word1.length(), word2.length()); j++){
            if(word1[j] != word2[j]){
                adj[word1[j]-'a'].push_back(word2[j]-'a');
                break;
            }
        }
    }

    int indegree[K] = {0};
    for(int i=0; i<K; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }

    queue<int> q;
    for(int i=0; i<K; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    string ans = "";
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans += (node + 'a');

        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);
        }
    }

    return ans;
}

int main() {
    int N = 5; // Number of words
    int K = 4; // Number of characters
    string dict[] = {"baa", "abcd", "abca", "cab", "cad"}; // Words
    cout << findOrder(dict, N, K) << endl;
    return 0;
}