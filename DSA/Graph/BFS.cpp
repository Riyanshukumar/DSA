//BFS - breadth first search(level order traversal) of a graph
//Time Complexity: O(V+E) where V is number of vertices in the graph and E is number of edges in the graph.
//Space Complexity: O(V) where V is number of vertices in the graph.

#include<bits/stdc++.h>
using namespace std;

vector<int> bfsGraph(int V, vector<int> adj[]){
    vector<int> bfs;
    vector<int> vis(V+1, 0);
    vis[1] = 1;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]){
                q.push(it);
                vis[it] = 1;
            }
        }
    }
    return bfs;
      
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

    vector<int> result = bfsGraph(n, adj);
    cout << "BFS of the graph: ";
    for(auto it: result){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}