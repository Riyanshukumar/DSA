#include<bits/stdc++.h>
using namespace std;

vector<int> shortestPath(vector<vector<int>>& edges, int N, int M, int src){
    vector<int> adj[N];
    for(auto it: edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    
    int dist[N];
    for(int i=0; i<N; i++) dist[i] = INT_MAX;
    dist[src] = 0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it: adj[node]){
            if(dist[node] + 1 < dist[it]){
                dist[it] = dist[node] + 1;
                q.push(it);
            }
        }
    }
    vector<int> ans(N, -1);
    for(int i=0; i<N; i++){
        if(dist[i] != INT_MAX){
            ans[i] = dist[i];
        }
    }
    return ans;
}

int main(){
    int N = 7, M = 7;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {2, 4}, {3, 5}, {4, 5}, {5, 6}};
    int src = 0;
    vector<int> result = shortestPath(edges, N, M, src);
    cout << "Shortest Path from source to all other nodes: ";
    for(auto it: result){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}