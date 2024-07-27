//DFS - Depth First Search
//DFS is a graph traversal algorithm. It is used to traverse the graph in a depthward motion and uses a stack to remember to get the next vertex to start a search, when a dead end occurs in any iteration. As the name suggests, the algorithm explores as far as possible along each branch before backtracking.
//Time Complexity: O(V+E) where V is number of vertices in the graph and E is number of edges in the graph.
//Space Complexity: O(V) where V is number of vertices in the graph.

#include<bits/stdc++.h>
using namespace std;

void dfsGraph(int node, vector<int> &vis, vector<int> adj[], vector<int> &dfs){
    dfs.push_back(node);
    vis[node] = 1;
    for(auto it: adj[node]){
        if(!vis[it]){
            dfsGraph(it, vis, adj, dfs);
        }
    }
}

int main(){
    int n, m;
    cout << "Enter the number of vertices and edges: ";
    cin >> n >> m;

    vector<int> adj[n+1];
    cout << "Enter the edges: ";
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(n, 0);
    vector<int> dfs;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfsGraph(i, vis, adj, dfs);
        }
    }

    cout << "DFS of the graph: ";
    for(auto it: dfs){
        cout << it << " ";
    }
    cout << endl;

    return 0;
} 