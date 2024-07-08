#include<iostream>
using namespace std;

void sort(int arr[], int n){
      int temp[n], i = 0;

      for (int j = 0; j < n; j++)
      {
        if(arr[j] == 0){
            temp[i] = arr[j];
            i++;
        }
      }
      for (int j = 0; j < n; j++)
      {
        if(arr[j] == 1){
            temp[i] = arr[j];
            i++;
        }
      }
      for (int j = 0; j < n; j++)
      {
        if(arr[j] == 2){
            temp[i] = arr[j];
            i++;
        }
      }
      for (int j = 0; j < n; j++)
      {
        arr[j] = temp[j];
        }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        }
        sort(arr, n);
        cout << "Sorted array: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
            }
            cout << endl;
           return 0;
           
}