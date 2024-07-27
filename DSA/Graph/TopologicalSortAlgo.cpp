#include<bits/stdc++.h>
using namespace std;

void dfs(int node, int vis[], stack<int> &st, vector<int> adj[]){
   vis[node] = 1;
   for(auto it : adj[node]){
     if(!vis[it]) dfs(it, vis, st, adj);
   }
   st.push(node);
}

vector<int> topoSort(int V, vector<int> adj[]){
    int vis[V] = {0};
    stack<int> st;
    for(int i=0; i<V; i++){
       if(!vis[i]){  
          dfs(i, vis, st, adj);
       }
    }
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
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
