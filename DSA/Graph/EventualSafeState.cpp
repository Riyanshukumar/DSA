#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<int> adj[], int vis[], int pathvis[], int check[]){
    vis[node] = 1;
    pathvis[node] = 1;
    check[node] = 0;

    for(auto it: adj[node]){
        if(!vis[it]){
            if(dfs(it, adj, vis, pathvis, check)){
                check[node] = 0;
                 return true;
            }
        }
        else if(pathvis[it]) {
            check[node] = 0;
            return true;
        }
    }
    check[node] = 1;
    pathvis[node] = 0;
    return false;
}

vector<int> eventualSafeNode(int V, vector<int> adj[]){
    int vis[V] = {0};
    int pathvis[V] = {0};
    int check[V] = {0};
    vector<int> safenodes;
    for(int i=0; i<V; i++){
        if(!vis[i]){
            dfs(i, adj, vis, pathvis, check);
        }
    }
    for(int i=0; i<V; i++){
        if(check[i] == 1) safenodes.push_back(i);
    }

    return safenodes;
}

int main() {
    // Create a sample graph
    int V = 12; // Number of vertices
    vector<int> adj[V]; // Adjacency list

    // Add edges to the graph
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[3].push_back(5);
    adj[4].push_back(6);
    adj[5].push_back(6);
    adj[6].push_back(7);
    adj[8].push_back(1);
    adj[8].push_back(9);
    adj[9].push_back(10);
    adj[10].push_back(8);
    adj[11].push_back(9);

    // Find the eventual safe nodes
    vector<int> safeNodes = eventualSafeNode(V, adj);

    // Print the eventual safe nodes
    cout << "Eventual Safe Nodes: ";
    for (int node : safeNodes) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}