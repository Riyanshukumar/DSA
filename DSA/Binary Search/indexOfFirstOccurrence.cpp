#include<iostream>
using namespace std;

/*int firstOccur(int arr[], int n, int k){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k)
          return i;
    }
    return -1;
    
}*/

int firstOccur(int arr[], int n, int k){

         int low = 0, high = n-1;

         while(low <= high){

         int mid = (low+high)/2 ;

         if(arr[mid] == k){
             if(arr[mid-1] != k)
                return mid;

             else   
                high = mid-1;
         }

         else if(arr[mid] < k){
            low = mid+1 ;
         }

         else {
            high = mid-1;
         }
    }

    return -1;
}

int main(){
    int arr[] = {3,4,5,5,5};
    cout << firstOccur(arr, 5, 5);

    return 0;
}