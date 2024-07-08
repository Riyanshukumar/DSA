#include<iostream>
using namespace std;

/*int lastOccur(int arr[], int low, int high, int k){

    if(low > high) return -1;

   int mid = (low+high)/2 ;

    if(arr[mid] > k)
       lastOccur(arr,low,mid-1,k);

     else if(arr[mid] < k)
         lastOccur(arr, mid+1, high, k);

      else
          if(arr[mid+1]!=k || mid == (sizeof(arr) / sizeof(arr[0])))
              return mid;

            else  
                lastOccur(arr,mid+1,high,k);       
}*/

//use iteration from last to check the element but it is O(n) time complexity

int lastOccur(int arr[], int n, int k){

    int low =0, high = n-1;

    while(low <= high){

       int mid = (low+high)/2 ;

        if(arr[mid] < k)
          low = mid+1;

        else if(arr[mid] > k)
          high = low-1;

       else
         if(arr[mid+1] != k || mid == n-1)
            return mid;

         else 
           low = mid+1;      
    }
     return -1;
}

int main(){

    int arr[] = {5,10,10,10,10,20,20};
    cout << lastOccur(arr,7,10) ;

    return 0;
}