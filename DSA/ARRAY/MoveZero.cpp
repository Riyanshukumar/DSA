#include<iostream>
using namespace std;

void moveZero(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0)
          swap(arr[i],arr[i+1]);
    }
    
}