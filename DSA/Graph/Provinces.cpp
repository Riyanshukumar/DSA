#include<bits/stdc++.h>
using namespace std;

/*void dfs(int node, vector<int> adjls[], int vis[]){
    vis[node] = 1;
    for(auto it : adjls[node]){
        if(!vis[it]){
           dfs(it, adjls, vis); 
        }
    }
}*/
void bfs(int node, vector<int> adjls[], int vis[]){
   vis[node] = 1;
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int vert = q.front();
        q.pop();
        for(auto it : adjls[vert]){
            if(!vis[it]){
                q.push(it);
                vis[it] = 1;
            }
        }
    }
}

int numProvinces(vector<vector<int>> adj,  int V){
    vector<int> adjls[V+1];
    for(int i=1; i<=V; i++){
        for(int j=1; j<=V; j++){
            if(adj[i][j] == 1 & i!=j){
                adjls[i].push_back(j);
                adjls[j].push_back(i);
            }
        }
    }
    int vis[V+1] = {0};
    int cnt = 0;
    for(int i=1; i<=V; i++){
        if(!vis[i]){
            cnt++;
            //dfs(i, adjls, vis);
            bfs(i, adjls, vis);
        }
    }
    return cnt;
}

int main() {
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;

    vector<vector<int>> adj(V+1, vector<int>(V+1, 0));
    cout << "Enter the adjacency matrix:\n";
    for (int i = 1; i <= V; i++) {
        for (int j = 1; j <= V; j++) {
            cin >> adj[i][j];
        }
    }

    int result = numProvinces(adj, V);
    cout << "Number of provinces: " << result << endl;

    return 0;
}