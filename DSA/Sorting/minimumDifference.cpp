#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minDiff(int arr[], int n){
    int min_diff = INT8_MAX;
    sort(arr,arr+n);

    for (int i = 1; i < n; i++)
    {
        min_diff = min(min_diff, abs(arr[i]-arr[i-1]));
    }
    return min_diff;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Minimum difference between two elements is: " << minDiff(arr, n) << endl;
    return 0;
    
}