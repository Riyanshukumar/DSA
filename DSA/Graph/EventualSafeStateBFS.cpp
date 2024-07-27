#include<bits/stdc++.h>
using namespace std;

vector<int> eventualSafeNode(int V, vector<int> adj[]){
    vector<int> adjrev[V];
    int indegree[V] = {0};
    for(int i=0; i<V; i++){
        for(auto it: adj[i]){
            adjrev[it].push_back(i);
            indegree[i]++;
        }
    }

    queue<int> q;
    for(int i=0; i<V; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    vector<int> safeNodes;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        safeNodes.push_back(node);

        for(auto it: adjrev[node]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);
        }   
    }
    
        sort(safeNodes.begin(), safeNodes.end());
        return safeNodes;
}

int main() {
    int V = 7; // Number of vertices
    vector<int> adj[V]; // Adjacency list

    // Add edges to the graph
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[3].push_back(0);
    adj[2].push_back(4);
    adj[5].push_back(4);
    //adj[6].push_back(4);

    vector<int> result = eventualSafeNode(V, adj);

    // Print the eventual safe nodes
    cout << "Eventual Safe Nodes: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
