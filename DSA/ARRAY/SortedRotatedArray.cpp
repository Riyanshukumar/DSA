#include<iostream>
using namespace std;

int searchInrotated(int arr[], int n, int k){
    int st = 0, end = n-1;

    while(st <= end){

    int mid = (st+end)/2 ;
      if(arr[mid] == k) return mid;

      if(arr[st] < arr[mid]){
          if(arr[st]<=k && arr[mid]>k)
              end = mid-1;
          else  
             st = mid+1;   
         }

      else{
           if(arr[mid]<k && arr[end]>=k)
              st = mid+1;
          else 
              end = mid-1;
           
   }

}
          return -1;
}

int main(){
    int arr[] ={10,20,30,40,50,1,2,3,4,5};

    cout << searchInrotated(arr,10,10);

    return 0;
}