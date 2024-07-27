#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, int parent, vector<int> vis, vector<int> adj[]){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            if(dfs(it, node, vis, adj))
               return true;
        }
        else if(it != parent) return true;
    }
    return false;
}

bool isCyclic(int V, vector<int> adj[]){
    vector<int> vis(V, 0);
    for(int i=0; i<V; i++){
        if(!vis[i]){
            if(dfs(i, -1, vis, adj)) return true;
        }
    }
    return false;
}

int main() {
    int V = 5; // number of vertices
    vector<int> adj[V]; // adjacency list

    // Add edges to the graph
    adj[0].push_back(1);
    adj[0].push_back(4);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[3].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(3);
    adj[4].push_back(0);

    if (isCyclic(V, adj))
        cout << "Graph contains a cycle";
    else
        cout << "Graph does not contain a cycle";

    return 0;
}