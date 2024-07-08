#include<iostream>
using namespace std;

int partition(int arr[], int l, int h){
       int pivot = arr[l];
       int i = l - 1;
       int j = h + 1;

       while(true){
         do
         {
             i++;
         } while (arr[i] < pivot);

         do
         {
            j--;
         } while (arr[j] > pivot);
         
         if(i >= j) return j;
         swap(arr[i], arr[j]);
         
       }
}
void qSort(int arr[], int low, int high){
    if(low < high){
        int p = partition(arr, low, high);
        qSort(arr, low, p);
        qSort(arr, p+1, high);
    }
}

int main(){
    int arr[] = {6,3,8,4,2,7,1,10,5,2};
    int n = 10;
    qSort(arr, 0, n-1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}