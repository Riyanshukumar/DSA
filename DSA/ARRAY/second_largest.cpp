#include<iostream>
using namespace std;

int secondLargest(int arr[], int n){
    int secLarge = -1;
    int largest = 0;

    for (int i = 1; i < n; i++)
    {
        if(arr[i] > arr[largest]){
            secLarge = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]){
            if(secLarge == -1 || arr[i] > arr[secLarge])
                  secLarge = i;
        }
    }
    return secLarge;
}

int main(){
    int arr[6] = {4,89,34,98,27,80};
    cout << secondLargest(arr,6);
}