#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*void rotate(vector<vector<int>> &arr){
    int n = arr.size();
    int temp[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[n-j-1][i] = arr[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = temp[i][j];
        }
    }
    
}*/

void rotate(vector<vector<int>> &arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           swap(arr[i][j],arr[j][i]);
       }
    }

    for(int k=0;k<n;k++){
       int i = 0, j = n-1;
         while(i<j){
            swap(arr[i][k],arr[j][k]);
         i++; j--;
       }
    }
}  

int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr;

    for(int i=0;i<n;i++){
        vector<int>temp;

    for(int j=0;j<n;j++){
         int x;
         cin>>x;
         temp.push_back(x);
        }
          arr.push_back(temp);
     }
         rotate(arr);
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
          }
            cout<<endl;
        }
            return 0;
}