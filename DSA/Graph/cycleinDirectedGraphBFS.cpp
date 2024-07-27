#include<bits/stdc++.h>
using namespace std;

bool isCyclic(int V, vector<int> adj[]){
    int indegree[V] = {0};
    for(int i=0; i<V; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }

    queue<int> q;
    for(int i=0; i<V; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    
    int cnt = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cnt++;

        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);
        }
    }

    if(cnt == V) return false;
    else return true;
}

int main() {
    int V = 5; // Assuming 5 as the number of vertices
    vector<int> adj[V];

    // Adding edges to the graph
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(0);

    if (isCyclic(V, adj)) {
        cout << "Graph contains a cycle" << endl;
    } else {
        cout << "Graph does not contain a cycle" << endl;
    }

    return 0;
}