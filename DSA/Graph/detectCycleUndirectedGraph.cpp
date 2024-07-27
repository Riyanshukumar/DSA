#include<bits/stdc++.h>
using namespace std;

bool detect(int src, vector<int> adj[], int vis[]){
    vis[src] = 1;
    queue<pair<int,int>> q;
    q.push({src, -1});
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push({it, node});
            }
            else if(parent != it){
                return true;
            }
        }
    }
    return false;
}

bool isCyclic(int V, vector<int> adj[]){
        int vis[V] = {0};
        for (int i = 0; i < V; i++)
        {
            if(!vis[i]){
                if(detect(i, adj, vis)) return true;
            }
        }
        return false;
}

int main() {
    int V = 4; // Number of vertices
    vector<int> adj[V]; // Adjacency list

    // Add edges to the graph
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[2].push_back(3);
    adj[3].push_back(2);

    adj[3].push_back(1);
    adj[1].push_back(3);

    // Check if the graph contains a cycle
    if (isCyclic(V, adj)) {
        cout << "The graph contains a cycle." << endl;
    } else {
        cout << "The graph does not contain a cycle." << endl;
    }

    return 0;
}