#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int **arr, int m, int n){
    for(int i=0; i<m; i++){
        if(i%2 == 0){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
        }
        
        }
        else{
            for(int j=n-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
                }
        
                }   
                }

}

int main(){
    int m, n;
    cin>>m>>n;
    int **arr = new int*[m];
    for(int i=0; i<m; i++){
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
          cin >> arr[i][j];  
        }
        
        }
        print(arr, m, n);
        return 0;

}