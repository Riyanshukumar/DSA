#include<iostream>
using namespace std;

void MinFlip(int arr[], int n){
       int same = arr[0];

       for (int i = 1; i < n; i++)
       {
         if(arr[i] != arr[i-1]){

            if(arr[i] != arr[0]){
             cout << "from " << i << " to ";
         }   
            else
               cout << (i-1) << endl;
       }
     }
        
      if(arr[n-1] != arr[0])    
          cout << (n-1) << endl;      
}

int main(){

    int arr[] = {0,0,1,1,1,0,0,1,1};

    MinFlip(arr,9);
}