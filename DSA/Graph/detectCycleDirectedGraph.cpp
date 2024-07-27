#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<int> adj[], int vis[], int pathvis[]){
    vis[node] = 1;
    pathvis[node] = 1;

    for(auto it: adj[node]){
        if(!vis[it]){
            if(dfs(it, adj, vis, pathvis)) return true;
        }
        else if(pathvis[it]) return true;
    }
    pathvis[node] = 0;
    return false;
}

bool isCyclic(int V, vector<int> adj[]){
    int vis[V] = {0};
    int pathvis[V] = {0};

    for(int i=0; i<V; i++){
        if(!vis[i]){
            if(dfs(i, adj, vis, pathvis)) return true;
        }
    }
}

int main(){
    int V = 4; // number of vertices
    vector<int> adj[V]; // adjacency list

    // Add edges to the graph
    adj[0].push_back(1);
    //adj[1].push_back(0);
    adj[1].push_back(2);
    //adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);


    if (isCyclic(V, adj)) {
        cout << "The graph contains a cycle." << endl;
    } else {
        cout << "The graph does not contain a cycle." << endl;
    }

    return 0;
}