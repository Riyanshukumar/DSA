#include<iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high){
    int left[mid-low+1];
    int right[high-mid];

    for (int i = 0; i <= mid-low; i++)
    {
        left[i] = arr[low+i];
    }
    for (int j = 0; j < high-mid; j++)
    {
        right[j] = arr[mid+j+1] ;
    }
    
    int m = mid-low+1;
    int n = high-mid ;
    int i = 0, j = 0;
    int k = low;

    while(i < m && j < n){
        if (left[i]<=right[j])
        {
           arr[k] = left[i] ;
            i++; k++;
        }
        else{
              arr[k] = right[j] ;
              j++; k++;
        }
        
    }

    while(i < m){
        arr[k] = left[i];
        i++; k++;
    }
    while (j < n)
    {
        arr[k] = right[j];
        j++; k++;
    }
    
}

int main() {
    int arr[] = {10,20,40,20,30};
    int size = sizeof(arr) / sizeof(arr[0]);

    Merge(arr, 0, 2, 4);

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}