#include<iostream>
using namespace std;

int partition(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l - 1;
    int j = h + 1;

    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j) {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}

int main(){
    int arr[] = {6,3,10,4,2,7,1,6,5,8};
    int n = 10;
   int index = partition(arr,0,n-1);

    cout << "Array after partition: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << index;

    return 0;
}