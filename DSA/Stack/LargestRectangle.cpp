#include<bits/stdc++.h>
using namespace std;

int largestHist(vector<int>& arr, int n){
     stack<int>s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i]){
            int tp = s.top();
            s.pop();
            int curr = arr[tp] * (s.empty()?i:(i-s.top()-1));
            ans = max(ans, curr);
        }
        s.push(i);
    }
    while(s.empty()==false){
        int tp = s.top();
        s.pop();
        int curr = arr[tp] * (s.empty()?n:(n-s.top()-1));
        ans = max(ans, curr);
    }
    return ans;
}

int maxRectangle(vector<vector<int>>& mat){
     int R = mat.size();
     int C = mat[0].size();

     int ans = largestHist(mat[0], C);
     for (int i = 1; i < R; i++)
     {
        for (int j = 0; j < C; j++)
        {
            if(mat[i][j]==1)
               mat[i][j] += mat[i-1][j];
        }
        ans = max(ans, largestHist(mat[i], C));
     }
     return ans;
}

int main() {
    int R, C;
    cout << "Enter the number of rows and columns: ";
    cin >> R >> C;

    vector<vector<int>> mat(R, vector<int>(C));
    cout << "Enter the elements: ";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> mat[i][j];
        }
    }

    int result = maxRectangle(mat);
    cout << "Maximum area: " << result << endl;

    return 0;
}