#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int m, n;

void search(vector<vector<int>> &arr, int x){
    int m = arr.size();
    int n = arr[0].size();

    int i = 0, j = n-1;
    while (i < m && j >= 0) {
        if (arr[i][j] == x){
         cout << "Element found at (" << i << ", " << j << ")" << endl;
         return ;
        }
        if (arr[i][j] > x)
          j--;
        else
          i++;
        }
        cout << "not found";
        return ;

}

int main(){
    int m, n ;
    cin >> m >> n;
    vector<vector<int>> arr;
    for(int i = 0; i < m; i++){
        vector<int> temp;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            temp.push_back(x);
            }
            arr.push_back(temp);
            }
            int x;
            cin >> x;
            search(arr,x);
            return 0;
            
}