#include<bits/stdc++.h>
using namespace std;

//directed graph
/*int main(){
    int n, m; // n = no of nodes, m = no of edges
    cin >> n >> m;

    vector<int> adj[n+1]; // adjacency list
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // u -> v
    }
    
}*/

int main(){
    int n, m;
    cin >> n >> m;

    /*int adj[n+1][n+1]; // adjacency matrix
    int u, v, w;
    cin >> u >> v >> w;
    adj[u][v] = w;
    adj[v][u] = w;
    return 0;*/

    vector<pair<int, int>> adj[n+1]; // adjacency list
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); // w is the weight of edge u -> v
        adj[v].push_back({u, w}); // 
    }
}