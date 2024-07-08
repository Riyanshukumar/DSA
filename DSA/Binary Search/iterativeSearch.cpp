#include<iostream>
using namespace std;

/*int searchIndex(int arr[], int n, int k){
    int idx = -1;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k){
           idx = i;
           break;
        }   
    }
    return idx;
    
}*/

int searchIndex(int arr[], int n, int k){
  
   int st = 0;
   int end = n-1;

   while(st <= end){
      int mid = (st+end)/2 ;

      if(arr[mid] == k)
         return mid;
      else if(arr[mid] > k)
         end = mid-1;
      else 
         st = mid+1;      

   }
   return -1;
}

int main(){
    int arr[] = {10,20,30,40,50};
    cout << searchIndex(arr,5,40);

    return 0;
}