#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*void print(int **arr, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
            }
            cout << endl;
            }
}*/

/*void print(int *arr[], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
            }
            cout << endl;
            }
}*/

/*void print(vector<int>arr[], int m){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < arr[i].size(); j++) 
        {
            cout << arr[i][j] << " ";
            }
    }
    
}*/

void print(vector<vector<int>> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
            }
            cout << endl;
            }
}

int main(){
    int m, n;
   /* int **arr;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    arr = new int *[m];

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i;
            cout << arr[i][j] << " ";
        }
        
    }*/
   cout << "Enter the number of rows and columns: ";
   cin >> m >> n;
   /*int *arr[m];
   
    for(int i=0; i<m; i++){
        arr[i] = new int[n];
        for(int j=0; j<n; j++){
            arr[i][j] = i+j;
        }
    } 
   print(arr,m,n);*/
  /* vector<int>arr[m];
   
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        arr[i].push_back(i+j);
        }
        }
        print(arr,m); */

 vector<vector<int>>arr ;
  for (int i = 0; i < m; i++)
  {
     vector<int> v;
     for (int j = 0; j < n; j++)
     {
        v.push_back(i+j);
  }
  arr.push_back(v);
  }
  
  print(arr);

    return 0;
}