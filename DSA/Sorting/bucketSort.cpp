#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bucketSort(int arr[], int n, int k){
    
    int max_val = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_val = max(max_val, arr[i]);
    }
    max_val++;
    vector<int> b[k];
    for (int i = 0; i < n; i++)
    {
        int bi = (k*arr[i])/max_val;
        b[bi].push_back(arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        sort(b[i].begin(), b[i].end());
    }
    int index = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < b[i].size(); j++)
        {
            arr[index++] = b[i][j];
        }
    }
}

int main(){
    int arr[] = {90, 40, 100, 80, 50, 120, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    bucketSort(arr, n, k);
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}