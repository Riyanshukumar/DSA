#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bTraversal(vector<vector<int>> &arr, int m, int n){
    if(m == 1){
        for(int i = 0; i < n; i++){
            cout << arr[0][i] << " ";
            }
    }
    else if(n == 1){
        for(int i = 0; i < m; i++){
            cout << arr[i][0] << " ";
            }
            }

     else{
            for(int i = 0; i < n; i++){
                cout << arr[0][i] << " ";
            }
            for(int i = 1; i < m - 1; i++){
                cout << arr[i][n - 1] << " ";
            }
            for(int i = n - 1; i >= 0; i--){
                cout << arr[m - 1][i] << " ";
                }
            for(int i = m - 2; i >= 1; i--){
                    cout << arr[i][0] << " ";
                }      

     }       

}

int main(){
    int n,m;
    int ele;
    cin >> n >> m;
    vector<vector<int>> arr;

    for(int i = 0; i < m; i++){
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            cin >> ele;
            v.push_back(ele);
        }
        arr.push_back(v);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
         }
         cout << endl;
    }
    
    bTraversal(arr,m,n);

    return 0;  
}