#include<iostream>
using namespace std;

void partition(int arr[], int l, int h, int p){
    int temp[h-l+1], index = 0;

    for (int i = l; i <= h; i++)
    {
        if(arr[i] < arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = l; i <= h; i++)
    {
        if(arr[i] == arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = l; i <= h; i++)
    {
        if(arr[i] > arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = l; i <= h; i++)
    {
       arr[i] = temp[i-l];
    } 
}

int main() {
    int arr[] = {5,13,6,1,10,8,12,4,9,2,14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = 5;

    partition(arr, 0, n-1, pivot);

    cout << "Array after partition: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}