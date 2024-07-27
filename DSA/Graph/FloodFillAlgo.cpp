#include<bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>>&ans, vector<vector<int>>&image, int newColor, int delRow[], int delCol[], int iniColor){
     ans[row][col] = newColor;
     int n = image.size();
     int m = image[0].size();

     for(int i=0; i<4; i++){
        int nrow = row + delRow[i];
        int ncol = col + delCol[i];

        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == iniColor && ans[nrow][ncol] != newColor){
            dfs(nrow, ncol, ans, image, newColor, delRow, delCol, iniColor);
        }
     }
}

vector<vector<int>> FloodFill(vector<vector<int>>& image, int sr, int sc, int newColor){
     int iniColor = image[sr][sc];
     vector<vector<int>> ans = image;
     int delRow[] = {-1, 0, 1, 0};
     int delCol[]= {0, 1, 0, -1};
     dfs(sr, sc, ans, image, newColor, delRow, delCol, iniColor);

     return ans;
}

int main() {
    // Test case
    vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    int sr = 1, sc = 1, newColor = 2;

    vector<vector<int>> result = FloodFill(image, sr, sc, newColor);

    // Print the result
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}