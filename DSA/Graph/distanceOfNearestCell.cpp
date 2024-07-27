#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> nearest(vector<vector<int>>grid){
     int n = grid.size();
     int m = grid[0].size();
     vector<vector<int>> vis(n, vector<int>(m, 0));
     vector<vector<int>> dist(n, vector<int>(m, 0));

     queue<pair<pair<int,int>, int>> q;
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]==1){
                q.push({{i,j}, 0});
                vis[i][j] = 1;
            }
            else{
                vis[i][j] = 0;
            }
        }
     }

     int delrow[] = {-1, 0, 1, 0};
     int delcol[] = {0, 1, 0, -1};

     while (!q.empty())
     {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int steps = q.front().second;
        q.pop();
        dist[row][col] = steps;

        for(int i=0; i<4; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0){
                vis[nrow][ncol] = 1;
                q.push({{nrow, ncol}, steps+1});
            }
        }
     }
     return dist;
}

int main() {
    // Sample grid
    vector<vector<int>> grid = {
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {1, 1, 0, 1},
        {1, 0, 0, 0}
    };

    // Call the nearest function
    vector<vector<int>> result = nearest(grid);

    // Print the distances
    int n = result.size();
    int m = result[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}