#include<iostream>
using namespace std;

int findMajority(int arr[], int n){

     int ans = 0;
     int count = 1; 
    
     for (int i = 1; i < n; i++)
     {
         if(arr[ans] == arr[i])
           count++;

        else   
            count--;

        if(count == 0){
            ans = i;
            count = 1;
        }
              
     }

     count = 0;

     for(int i = 0; i< n; i++){
        if(arr[ans] == arr[i])
          count++;
     }
        if(count <= n/2)
          return -1;
    else 
       return ans;
}

int main(){

    int arr[] = {8,3,8,2,3};

   int ans = findMajority(arr,5);
 
   cout<< "index "<<ans << " "<< " element "<<arr[ans] ;

   return 0;
    
}