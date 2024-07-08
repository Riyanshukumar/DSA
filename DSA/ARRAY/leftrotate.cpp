#include<iostream>
using namespace std;

void leftrotate(int arr[], int n, int d){

      for (int i = 0; i < d; i++)
      {
        int temp = arr[0];

        for (int j = 1; j < n; j++)
        {
            arr[j-1] = arr[j];
        }
        arr[n-1] = temp;
      }
          
}

int main(){
    int arr[7] = {2,5,3,7,4,6,9};
    
    leftrotate(arr,7,4);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/*
void leftrotbyone(int arr[], int n){
    int temp = arr[0];

        for (int j = 1; j < n; j++)
        {
            arr[j-1] = arr[j];
        }
        arr[n-1] = temp;
      }

void leftrotate(int arr[], int n, int d){

      for (int i = 0; i < d; i++)
      {
        leftrotbyone(arr,n);       
  }
}*/