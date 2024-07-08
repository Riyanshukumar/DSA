#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int correctIndex = arr[i]-1;
        while (0 <= correctIndex && correctIndex <= n-1 && arr[i] != arr[correctIndex])
        {
            swap(arr[i], arr[correctIndex]);
            correctIndex = arr[i]-1;
        }
    }   
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != i+1) return (i+1);
    }
    return n+1;
}

int main(){

    int arr[] = {10,-1,2,4,3-2,6};
    cout << missingNumber(arr,7);

    return 0;
}