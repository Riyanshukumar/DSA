#include<iostream>
using namespace std;

void sortEvenOdd(int arr[], int n){
    int i = -1;

    for (int j = 0; j < n; j++)
    {
        if(arr[j]%2 == 0){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
}

int main(){
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortEvenOdd(arr, n);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}