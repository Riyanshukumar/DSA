#include<iostream>
using namespace std;

bool CheckSorting(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
          return false;
    }
    return true;
}

int main(){
    int arr[5] = {2,4,6,8,10};
    cout << CheckSorting(arr,5);
}