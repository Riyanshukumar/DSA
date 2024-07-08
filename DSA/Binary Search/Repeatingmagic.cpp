#include<iostream>
using namespace std;

/*int repeating(int arr[], int n){

   int slow = arr[0]+1, fast = arr[0]+1;
   do{
    slow = arr[slow]+1;
    fast = arr[arr[fast]+1]+1;
   }  
     while(slow != fast);

     slow = arr[0]+1;
     while (slow != fast)
     {
        slow = arr[slow]+1;
        fast = arr[fast]+1;
     }
       return slow-1;      
}*/

int repeating(int arr[], int n){
    
     for (int i = 0; i < n; i++)
     {
        arr[arr[i]%n] += n;
     }
     for(int i = 0; i < n; i++){
        if(arr[i]/n >= 2)
           return i ;
     }
         return -1;
}

int main(){

     int arr[] = {5,4,3,0,1,2,5,7,6,5};

     cout << repeating(arr,10);

     return 0;
}