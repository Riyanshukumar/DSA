#include<bits/stdc++.h>
using namespace std;

vector<int> topoSort(int V, vector<int> adj[]){
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

    vector<int> topo;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);
        }
    }
    return topo;
}

int main() {
    int V = 5; // Number of vertices
    vector<int> adj[V]; // Adjacency list

    // Add edges to the graph
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(3);
    adj[3].push_back(4);

    vector<int> result = topoSort(V, adj);

    // Print the topological sorting
    cout << "Topological Sorting: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}