#include<iostream>
using namespace std;

void sortPosNeg(int arr[], int n){
    int i = -1, j = n;
    while (true){
        do{
            i++;
            }while (arr[i] < 0);

        do{
            j--;
            }while (arr[j] > 0);

        if(i >= j) return;

        swap(arr[i], arr[j]);
       
    }    
}

int main(){
    int arr[] = {-12, 11, -13, 8, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortPosNeg(arr, n);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}