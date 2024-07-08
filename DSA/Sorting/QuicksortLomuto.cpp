#include<iostream>
using namespace std;

int partition(int arr[], int l, int h){
    int pivot = arr[h];
    int i = l - 1;

    for (int j = l; j < h; j++)
    {
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return i+1;
    
}

void qSort(int arr[], int l, int h){
    if(l < h){
        int p = partition(arr, l, h);
        qSort(arr, l, p-1);
        qSort(arr, p+1, h);
   }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        }
        qSort(arr, 0, n-1);
        cout << "Sorted array: ";
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
            }
            cout << endl;
            return 0;
            
}