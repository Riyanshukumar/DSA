#include<iostream>
using namespace std;

/*int peakElement(int arr[], int n){
    if(n == 1) return arr[0];
    if(arr[0] > arr[1]) return arr[0];
    if(arr[n-1] > arr[n-2]) return arr[n-1];

    for (int i = 1; i < n-2; i++)
    {
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1])
           return arr[i];
    }
     
}*/

int peakElement(int arr[], int n){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low+high)/2 ;

        if((mid == 0 || arr[mid-1] <= arr[mid])&&(mid == n-1 || arr[mid+1] <= arr[mid]))
           return arr[mid];

        if(mid>0 && arr[mid-1] >= arr[mid])
           high = mid-1;

        else 
           low = mid+1;      
    }
      return -1;
}

int main(){

    int arr[] = {1,3,2,5,7,4,10,54,33,25};

    cout << peakElement(arr,10);

    return 0;
}