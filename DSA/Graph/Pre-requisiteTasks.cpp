#include<bits/stdc++.h>
using namespace std;

bool isPossible(int V, vector<pair<int,int>>& prerequisites){
    vector<int> adj[V];
    for(auto it: prerequisites){
        adj[it.first].push_back(it.second);
    }

    int indegree[V] = {0};
    for(int i=0; i<V; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }

    queue<int> q;
    for(int i=0; i<V; i++){
        if(indegree[i]==0) q.push(i);
    }

    vector<int>topo;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);
        }
    }

    if(topo.size() == V) return true;
    return false;
}

int main() {
    int V = 5; // Example value, change it according to your requirements
    vector<pair<int, int>> prerequisites = {{1, 0}, {2, 1}, {3, 2}, {4, 3}}; // Example value, change it according to your requirements

    bool possible = isPossible(V, prerequisites);

    if (possible) {
        cout << "It is possible to complete all tasks." << endl;
    } else {
        cout << "It is not possible to complete all tasks." << endl;
    }

    return 0;
}