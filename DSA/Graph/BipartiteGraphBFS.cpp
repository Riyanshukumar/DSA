#include<bits/stdc++.h>
using namespace std;
//cycle with odd length can't be bipartite
//cycle with even length and non cyclic graph is always bipartite

bool check(int start, int V, vector<int>adj[], int color[]){
    queue<int>q;
    q.push(start);
    color[start] = 0;
    
    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for(auto it : adj[node]){
            if(color[it] == -1){
                color[it] = !color[node];
                q.push(it);
            }
            else if(color[it] == color[node]){
                return false;
            }
        }
    }
    return true;
}

bool isBipartite(int V, vector<int>adj[]){
    int color[V];
    for (int i = 0; i < V; i++) color[i] = -1;

    for (int i = 0; i < V; i++)
    {
        if(color[i] == -1){
            if(!check(i, V, adj, color)) return false;
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