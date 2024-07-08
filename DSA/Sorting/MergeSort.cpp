#include<iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high){
    int m = mid-low + 1 ;
    int n = high - mid;
    int left[m], right[n];

    for (int i = 0; i < m; i++)
    {
        left[i] = arr[low+i];
    }
    for (int i = 0; i < n; i++)
    {
        right[i] = arr[mid+i+1] ;
    }

    int i = 0, j = 0;
    int k = low;
    
    while(i < m && j < n){
        if(left[i]<=right[j]){
            arr[k] = left[i];
            i++; k++;
        }
        else{
            arr[k] = right[j];
            j++; k++;
        }

    }

    while(i < m){
        arr[k] = left[i];
        i++;k++;
    }
    while (j < n)
    {
        arr[k] = right[j];
        j++;k++;
    }
    
}

void MergeSort(int arr[], int l, int r){
    if(r>l){
        int m = l +(r-l)/2 ;
        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);
        Merge(arr, l, m, r);
    }
}

int main() {
    int arr[] = {50,40,60,80,20,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0, 5);

    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
