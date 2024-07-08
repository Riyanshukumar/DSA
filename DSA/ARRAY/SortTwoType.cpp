#include<iostream>
using namespace std;

void sortBinary(int arr[], int n){
    int i = -1, j = n;

    while(true){
        do{
            i++;
        }while(arr[i] == 0);

        do{
            j--;
        }while(arr[j] == 1);

        if(i>=j)
            return;

        swap(arr[i], arr[j]);
    }
}

int main(){
    int arr[] = {0, 1, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortBinary(arr, n);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}