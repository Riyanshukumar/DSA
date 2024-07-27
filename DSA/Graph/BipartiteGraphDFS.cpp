#include<bits/stdc++.h>
using namespace std;

bool check(int node, int col, vector<int> adj[], int color[]){
    color[node] = col;
    for(auto it: adj[node]){
        if(color[it] == -1){
            if(!check(it, !col, adj, color)) return false;
        }
        else if(color[it] == col) return false;
    }
    return true;
}

bool isBipartite(int V, vector<int> adj[]){
    int color[V];
    for (int i = 0; i < V; i++) color[i] = -1;

    for(int i=0;  i<V; i++){
        if(color[i] == -1){
            if(!check(i, 0, adj, color)) return false;
        }
    }
    return true;
}

int main() {
    int V = 4; // number of vertices
    vector<int> adj[V]; // adjacency list

    // Add edges to the graph
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);

    if (isBipartite(V, adj)) {
        cout << "The graph is bipartite." << endl;
    } else {
        cout << "The graph is not bipartite." << endl;
    }

    return 0;
}