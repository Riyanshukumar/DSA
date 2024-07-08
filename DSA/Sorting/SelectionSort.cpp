#include<iostream>  //unstable sort
using namespace std;

/*void SelectionSort(int arr[], int n){
     int temp[n];

    for (int i = 0; i < n; i++)
    {
        int idx = 0;
        for (int j = 1; j < n; j++)
        {
            if(arr[j] < arr[idx])
                idx = j;
        }
        temp[i] = arr[idx];
        arr[idx] = INT8_MAX;
        
    }
    for (int i = 0; i < n; i++)
    {
       arr[i] = temp[i];
    }
} */

void SelectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
               min_idx = j;
        }
              swap(arr[i],arr[min_idx]);   
    }
    
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}