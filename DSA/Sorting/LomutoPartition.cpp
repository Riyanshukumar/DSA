#include<iostream>
using namespace std;

int partition(int arr[], int l, int h, int p)
{    swap(arr[p], arr[h]);

     int pivot = arr[h];
     int i = l-1;

     for (int j = l; j < h; j++)
     {
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
     }
     swap(arr[i+1],arr[h]);
     return (i+1);
}

int main(){
    int arr[] = {5,13,6,1,10,8,12,4,9,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = 5;

    int p = partition(arr, 0, n-1, pivot);

    cout << "Array after partition: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Index of pivot element: " << p << endl;

    return 0;
}