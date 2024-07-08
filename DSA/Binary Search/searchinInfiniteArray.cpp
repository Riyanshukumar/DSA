#include<iostream>
using namespace std;

/*int search(int arr[], int x){

    int i = 0;
    while(arr[i] <= x){
        if(arr[i] == x) return i;
        else i++;
    }
    return -1;
}*/

int binarySearch(int arr[], int k, int st, int end){
   
    int mid = (st+end)/2 ;
    if(arr[mid] == k) 
      return mid;

    else if(arr[mid] < k)
       st = mid+1 ;

    else 
       end = mid-1 ;

}


int search(int arr[], int x){
    
     if(arr[0]==x) return 0;
   
     int i = 1;
     while (arr[i] < x)
     {
        i = i*2 ;
     }

     if(arr[i] == x) return i;

     return binarySearch(arr,x,(i/2)+1,i-1) ;
     

}

int main(){

    int arr[] = {10,20,30,40,50,100,200,300};

    cout << search(arr,100);

    return 0;
}