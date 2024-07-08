#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minXdiff(int arr[], int n, int x){
    if(x > n) return -1;

    sort(arr,arr+n);
    int minDiff = arr[x-1]-arr[0];

    for (int i = 1; i <= n-x; i++)
    {
        minDiff = min(minDiff,arr[i+x-1]-arr[i]);
    }
    return minDiff;
}

int main(){
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Minimum difference between two elements is: " << minXdiff(arr, n, x) << endl;
    return 0;
}