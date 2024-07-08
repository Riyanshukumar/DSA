#include<iostream>
using namespace std;

int firstOccur(int arr[], int n, int k){
    int st = 0, end = n-1;

    while(st <= end){
        int mid = (st+end)/2;

        if(arr[mid] > k)
           end = mid-1;

        else if(arr[mid] < k)
           st = mid+1;

        else
           if(arr[mid-1] != k || mid == 0)
              return mid;

           else
              end = mid-1;         
    }
       return -1;
}

int lastOccur(int arr[], int n, int k){
    int st = 0, end = n-1;

    while(st <= end){
        int mid = (st+end)/2;

        if(arr[mid] > k)
           end = mid-1;

        else if(arr[mid] < k)
           st = mid+1;

        else
           if(arr[mid+1] != k || mid == n-1)
              return mid;

           else
              st = mid+1;         
    }
      return -1;
}

int CountOccur(int arr[], int n, int k){

    int first = firstOccur(arr,n,k);

    if(first == -1) return 0;

    else
       return (lastOccur(arr,n, k) - first +1) ;

}

int main(){

    int arr[] = {2,3,3,6,6,6,9};

    cout << CountOccur(arr,7,8);

    return 0;
}