//DAG- directed acyclic graph
#include<bits/stdc++.h>
using namespace std; 

void topoSort(int node, vector<pair<int, int>> adj[], int vis[], stack<int> &st){
    vis[node] = 1;
    for(auto it: adj[node]){
        if(!vis[it.first]){
            topoSort(it.first, adj, vis, st);
        }
    }
    st.push(node);
}

vector<int> shortestPath(int N, int M, vector<int> edges[]){
    vector<pair<int, int>> adj[N];
    for(int i=0; i<M; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];
        adj[u].push_back({v, w});
    }

    int vis[N] = {0};
    stack<int> st;
    for(int i=0; i<N; i++){
        if(!vis[i]){
            topoSort(i, adj, vis, st);
        }
    }

    vector<int> dist(N, INT_MAX);
    dist[0] = 0;
    while(!st.empty()){
        int node = st.top();
        st.pop();
        if(dist[node] != INT_MAX){
            for(auto it: adj[node]){
                if(dist[node] + it.second < dist[it.first]){
                    dist[it.first] = dist[node] + it.second;
                }
            }
        }
    }
    return dist;
}

int main(){
    int N = 6, M = 7;
    vector<int> edges[M];
    edges[0] = {0, 1, 2};
    edges[1] = {0, 4, 1};
    edges[2] = {1, 2, 3};
    edges[3] = {2, 3, 6};
    edges[4] = {4, 2, 2};
    edges[5] = {4, 5, 4};
    edges[6] = {5, 3, 1};

    vector<int> result = shortestPath(N, M, edges);
    cout << "Shortest Path from source to all other nodes: ";
    for(auto it: result){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}