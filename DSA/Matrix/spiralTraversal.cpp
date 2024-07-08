#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void spiralTraversal(vector<vector<int>> &arr){
    int m = arr.size();
    int n = arr[0].size();
    int top = 0, bottom = m-1, left = 0, right = n-1;
    
    while(top <= bottom && left <= right){
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i]<< " ";
        }
        top++;
        for (int i = top; i <= bottom; i++){
            cout << arr[i][right] << " ";
        }
        right--;
        if(top <= bottom){
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        if(left <= right){
            for (int i = bottom; i >= top; i--){
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }   
}

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr;
    for (int i = 0; i < m; i++){
        vector<int> temp;
        for (int j = 0; j < n; j++){
            int x;
            cin >> x;
            temp.push_back(x);
            }
            arr.push_back(temp);
            }
            spiralTraversal(arr);
            return 0;


}