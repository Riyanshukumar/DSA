#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n, int k){
    int count[k] = {0};
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }
    for (int i = 1; i < k; i++)
    {
        count[i] += count[i-1];
    }
    int output[n];
    for (int i = n-1; i >= 0; i--)
    {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

/*void countSort(int arr[], int n, int k){
    int count[k] = {0};

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            arr[index] = i;
            index++;
        }
    }
}*/

int main(){
    int arr[] = {1, 4, 1, 2, 7, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = *max_element(arr, arr+n) + 1;

    countSort(arr, n, k);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}