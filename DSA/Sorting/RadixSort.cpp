#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  void countSort(int arr[], int n, int exp){
     int count[10], output[n];
       for (int i = 0; i < 10; i++)
      {
        count[i] = 0;
      }
        for (int i = 0; i < n; i++)
        {
            count[(arr[i]/exp)%10]++;
        }
        for (int i = 1; i < 10; i++)
        {
            count[i] += count[i-1];
        }
        for (int i = n-1; i >= 0; i--)
        {
            output[count[(arr[i]/exp)%10]-1] = arr[i];
            count[(arr[i]/exp)%10]--;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = output[i];
        }
  }

  void RadixSort(int arr[], int n){
     int mx = arr[0];
     for (int i = 1; i < n; i++)
     {
        if(arr[i]>mx)
            mx = arr[i];
     }
     for (int exp = 1; mx/exp > 0; exp = exp*10)
     {
        countSort(arr,n,exp);
     }
          
  }

int main(){
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    RadixSort(arr, n);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}